#include "main.h"
/**
 * _memset - fills n character
 * @s: pointer of area
 * @b: constant byte
 * @n: bytes of the memory to be filled
 * Return: A pointer to the filled memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
