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
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}