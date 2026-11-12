#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number element
 * @size: size of each elements
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int totalsize = nmemb * size;
unsigned int *memory = malloc(totalsize * sizeof(memory));
unsigned int i;
char *result;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (memory == NULL)
{
return (NULL);
result = memory;
}
for (i = 0 ; i < totalsize; i++)
{
result[i] = 0;
}
return (result);
}
