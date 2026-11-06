#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
int count;
int count2;

count2 = 0;
count = 0;
if (needle[count2] == '\0')
return (haystack);
while (needle[count] != '\0')
{
while (needle[count2] == haystack[count + count2])
{
count2++;
if (needle[count2] == '\0')
return (haystack + count);
}
count++;
}
return (0);
}
