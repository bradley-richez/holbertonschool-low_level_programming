#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
* free_dog - Free memory allocated for dog
* @d: Pointer to the dog to free
*
* Return: void
*/

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
else
{
free(d->name);
free(d->owner);
free(d);
}
}
