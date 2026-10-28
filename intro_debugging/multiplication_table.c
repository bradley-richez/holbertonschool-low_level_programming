#include <stdio.h>

/**
 * print_table - function print table of size
 * Return: table of
 * @size: integer
 */

void print_table(int size)
{
int row, col;

for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
printf("%d ", row * col);
}
printf("\n");
}
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - entry function
 * Return: always 0
 */
int main(void)
{
print_table(4);
return (0);
}
