#include "main.h"

/**
 * _strncpy - function copies the first ‘n’ characters
 *  @dest: first string to receive src
 * @src: source to copy in dest
 * @n: number character to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);

}
