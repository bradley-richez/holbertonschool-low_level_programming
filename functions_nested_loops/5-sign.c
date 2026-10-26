#include "main.h"

/**
 * print_sign - function to determinate lowercase and uppercase
 * @n:  is the int for the argument
 * Return: 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
