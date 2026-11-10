#include "main.h"
#include <stdlib.h>

/**
 * str_concat - check the code
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
int i,j;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
result = malloc(sizeof(char) * (i + j + 1));
if (result == NULL)
{
return (NULL);
}
return (result);
}
