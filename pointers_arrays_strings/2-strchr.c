#include "main.h"
/**
 * _strchr - find first character c in string s
 * @s: string
 * @c: find character in s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}

if (c != '\0')
{
return (&s[i]);
}
else
{
return (NULL);
}
}
