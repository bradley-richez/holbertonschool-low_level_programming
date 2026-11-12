#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array min to max
 * @min: value min
 * @max: value max
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
int *ptr;
int i;
int  diff = (max - min) + 1;
if (min > max)
{
return (NULL);
}
ptr = malloc(diff * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= diff; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
