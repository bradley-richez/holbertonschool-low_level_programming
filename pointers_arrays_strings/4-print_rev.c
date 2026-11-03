#include "main.h"

/**
 * print_rev - check the code
 * @s: string for function *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

void print_rev(char *s)
{
    int i;
    for (i = 0;s[i]>=0;i--)
    {
        _putchar(s[i]);
    }
}