

   #include "main.h"

/**
 * _strpbrk - find string accept in string s
 * @s: string
 * @accept: string founded
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
