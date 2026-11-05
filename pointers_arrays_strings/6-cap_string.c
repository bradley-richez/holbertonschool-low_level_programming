#include "main.h"

/**
 * cap_string - convert lower to uppercase the first letter of string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{

str[i] -= ('a' - 'A');
}
i++;
}
return (str);
}
