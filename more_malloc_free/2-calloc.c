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
unsigned int *memory = malloc(totalsize);
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (memory == NULL)
{
return (NULL);
}
for (i = 0 ; i <= totalsize; i++)
{
memory[i] = 0;
}
return (memory);
}
