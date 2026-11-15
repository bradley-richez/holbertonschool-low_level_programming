#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
unsigned int i;
dog = malloc(sizeof(*dog));
if (dog == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
{
}
dog->name = malloc(sizeof(char) *  (i + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
{
dog->name[i] = name[i];
}
dog->name[i] = name[i];

for (i = 0; owner[i] != '\0'; i++)
;
dog->owner = malloc(sizeof(char) * (i + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
dog->owner[i] = owner[i];
dog->owner[i] = '\0';

dog->age = age;
return (dog);
}
