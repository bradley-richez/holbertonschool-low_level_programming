#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printf all informations
 * @d: struct of dog
 */

void print_dog(struct dog *d)
{
printf("Name: %s\n",d->name);
printf("Name: %f\n",d->age);
printf("Name: %s\n",d->owner);
}
