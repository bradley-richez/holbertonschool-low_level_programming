#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: string
 * Return: New string
 */


char *_strdup(char *str)
{
int i;
int j;
char *twin;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
twin = malloc(sizeof(char) * (i + 1));

if (twin == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
twin[j] = str[j];
}
return (twin);
}
