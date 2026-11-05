/**
 * _memset - fills n character
 * @s: pointer of area
 * @b: constant byte
 * @n: bytes of the memory to be filled
 * Return: a
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
