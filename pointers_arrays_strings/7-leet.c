#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string
 * @str: string
 * Return: str
*/

char *leet(char *str)
{
int i = 0, j;
char c[] = "aAeEoOtTlL";
char change[] = "4433007711";

while (str[i] != '\0')
{
j = 0;
while (c[j] != '\0')
{
if (str[i] == c[j])
{
str[i] = change[j];
}
j++;
}
i++;
}
return (str);
}
