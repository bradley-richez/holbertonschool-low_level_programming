#include "main.h"

/**
 * _memcpy - copy n bytes from memory area
 * @dest: memory are dest
 * @src: memory area
 * @n: number bytes
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i=0; i < n;i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}
