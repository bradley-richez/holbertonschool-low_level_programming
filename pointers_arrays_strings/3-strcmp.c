#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function compare two strings
 * @s1: first string
 * @s2: second string
 * Return: dest
 */


int _strcmp(char *s1, char *s2)
{

int i = 0;

while ((str1[i] != '\0') && (str2[i] != '\0'))
{
if (str1[i] != str2[i])
return (str1[i] - str2[i]);

i++;
}

return (str1[i] - str2[i]);

}
