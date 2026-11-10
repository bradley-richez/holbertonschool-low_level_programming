#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



/**
 * main - check the code
 *
 * Return: Always 0.
 */

 void *malloc_checked(unsigned int b)
 {
    int *check;

    check = malloc(b);
    if (check == NULL)
    {
        exit(98);
    }
    return (check);
 }