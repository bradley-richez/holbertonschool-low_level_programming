#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with n bytes from s2
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return:  point to a newly allocated space in memory, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int s1_length = 0, s2_length = 0;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (n >= s2_length)
{
n = s2_length;
}
for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
{
}
for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
{
}
result = malloc(sizeof(char) * (s1_length + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < s1_length; i++)
{
result[i] = s1[i];
}
for (j = 0; j < s2_length; j++)
{
result[i] = s2[j];
i++;
}
result[i] = '\0';
return (result);
}
