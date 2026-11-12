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
void *pointer;
unsigned int totalSize, i;
char *result;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
totalSize = nmemb * size;
pointer = malloc(totalSize);
if (pointer == NULL)
{
return (NULL);
result = pointer;
}
for (i = 0 ; i < totalSize; i++)
{
result[i] = 0;
}
return (result);
}
