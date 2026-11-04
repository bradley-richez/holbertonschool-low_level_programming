#include "main.h"


/**
 * puts_half - print half of the string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
int len = 0;
int half;
int i;

while (str[len] != '\0')
{
len++;
}

half = len / 2;

if (len % 2 != 0)
{
half++;
}

for (i = half; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
