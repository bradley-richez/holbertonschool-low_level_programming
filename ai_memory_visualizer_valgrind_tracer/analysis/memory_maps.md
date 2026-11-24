# Memory Behavior Analysis & Visualizations

## 1. Stack Memory & Recursion (stack_example.c)

### Stack Frame Lifecycle and Layout

The program was compiled and executed normally without Valgrind. It finished successfully with exit status 0.

Each recursive call to `walk_stack` creates its own stack frame with the parameters `depth` and `max_depth` and the local variable `marker`. The function `dump_frame` creates a temporary frame containing `local_int`, `local_buf` and `p_local`. The pointer `p_local` holds the address of `local_int`. No explicit heap allocation takes place.

### Memory Layout Sequence

The first call to `walk_stack` starts with `depth` equal to 0, `max_depth` equal to 3 and `marker` equal to 0. The function `dump_frame` initializes `local_int` to 100 and the first character of `local_buf` to A. It returns before the next recursive call begins.

The following calls create separate `marker` variables with values 10, 20 and 30. The corresponding `local_int` values are 101, 102 and 103, and the first characters of `local_buf` are B, C and D. At depth three, all four recursive frames are active. The observed marker addresses decrease by 48 bytes between levels in this execution, showing downward stack growth on the tested platform.

When the maximum depth is reached, the functions return in reverse order, from depth three to depth zero. Each exit display call creates new temporary local variables.

### Variable Lifetimes

Each `marker`, `depth` and `max_depth` remains alive until its call to `walk_stack` returns. The variables `local_int`, `local_buf` and `p_local` exist only during each call to `dump_frame`. Their lifetime ends before the next recursive call. Reusing the same memory address does not mean that the previous variable is still alive.

## 2. Heap Allocations & Lifetime Management (heap_example.c)

### Dynamic Memory Architecture

This program is listed in the Makefile, but its source file was not provided. Its heap allocations could not be examined or tested.

### Memory Ownership and The Memory Leak

Without the source file, it is not possible to determine whether the program releases all its allocated memory or contains a memory leak.

## 3. Pointer Aliasing & Use-After-Free (aliasing_example.c)

### Pointer Aliasing Mechanism

The program was compiled using the Makefile with the intentional use-after-free warnings allowed. It finished with exit status 0 without Valgrind.

Initially, the local pointers `a` and `b` are null, and `n` is 5. The function `make_numbers` uses its local pointer `arr` to create an array of five integers on the heap and initializes them with the values 0, 11, 22, 33 and 44. The allocation occupies 20 bytes on the tested platform.

When `make_numbers` returns, its local variables `arr`, `i` and `n` stop existing, but the heap array remains alive. Its address is stored in `a` and then copied into `b`. Both pointers therefore refer to the same array. No second array is created.

### Use-After-Free State Traversal

Calling `free` with `a` ends the lifetime of the shared heap allocation. Both local pointer variables `a` and `b` remain alive, but neither can legally access the released array. They are dangling pointers, and their values are indeterminate under the C language rules.

At line 42, the pointer `b` is used to read the former third integer, located eight bytes from the original allocation address. At line 44, `b` is used to write the value 1234 to the former fourth integer, located twelve bytes from that address. Another invalid read follows at line 45.

These operations are heap use-after-free errors. The memory allocator is allowed to reuse the released block. The program did not crash during the observed execution, but that does not make these operations safe. Their results are not guaranteed, and actual corruption was not established.

## 4. Crash Analysis & Deterministic Segfault (crash_example.c)

### Causal Failure Chain

The variable `n` is 0 in `main`. The function `allocate_numbers` rejects this size and returns `NULL` before performing any heap allocation. Its local variables stop existing when it returns.

The pointer `nums` in `main` receives `NULL`, but the function does not validate it. At line 32, it attempts to write an integer through this pointer even though no destination object exists.

The program received a segmentation fault and exited with status 139. The error is a null pointer dereference, not a stack overflow or heap use-after-free. The local pointer itself is still alive, but it does not refer to an allocated integer.

## 5. Critical AI Review & Correction

### Initial AI Hypothesis (Incorrect)

An incorrect AI explanation suggested that `local_int` and `local_buf` remain alive throughout recursion and that calling `free` on `a` automatically resets `a` while leaving `b` usable.

### Analysis of AI Inaccuracies

The function `dump_frame` returns before recursion continues, so `local_int`, `local_buf` and `p_local` no longer exist during the next recursive call.

Releasing heap memory does not automatically reset `a` or `b`. Both pointers refer to the same allocation, so neither can safely access it after deallocation. A successful program exit does not prove that its memory accesses were valid.

### Technical Correction

Only the active `walk_stack` frames remain alive during recursion. The temporary variables in `dump_frame` have a separate lifetime for each function call.

Both local pointer variables `a` and `b` remain alive until `main` returns, but the shared heap array stops existing when it is released. Any subsequent access through either pointer is undefined behavior.
