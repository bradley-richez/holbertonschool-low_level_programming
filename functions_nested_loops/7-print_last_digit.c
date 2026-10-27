#include "main.h"

/**
 * main - check the code
 * print_last_digit - function to find value of an integer
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int n)
{
int last = n % 10;
if (n > 0 || n == 0)
{
_putchar('0' + last);
return (last);
}
else
{
n = n * -1;
_putchar (last + '0');
return (last);
}
}
