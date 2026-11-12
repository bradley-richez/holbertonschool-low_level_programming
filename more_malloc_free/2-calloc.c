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
unsigned int i;
unsigned int totalsize = nmemb * size;
void *pointer;
char *result;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointer = malloc(totalsize);
if (pointer == NULL)
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
