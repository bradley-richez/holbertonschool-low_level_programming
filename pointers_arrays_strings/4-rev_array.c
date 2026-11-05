#include "main.h"
#include <stdio.h>

/**
 * reverse_array function reverse an array
 * @a: array
 * @n: number total in array
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int temp;

while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}