#include "main.h"

/**
 * print_last_digit - Function to find value of an integer
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
_putchar(-n + '0');
return (-n);
}
else
{
_putchar(n + '0');
return (n);
}
}
