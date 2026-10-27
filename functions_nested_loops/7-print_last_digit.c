#include "main.h"

/**
 * print_last_digit - Function to find value of an integer
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
}
