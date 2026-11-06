#include "main.h"

/**
 * _strpbrk - find string accept in string s
 * @s: string
 * @accept: string founded
 *
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, j, find;


while (s[i] != '\0')
{
find = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
find = 1;
}
j = 0;
if (find == 1)
{
return (s + 1);
}
i++;
}
}
return (NULL);
}
