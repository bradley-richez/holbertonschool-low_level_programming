#include "main.h"

/**
* main - check the code
* print_last_digit is a function to return the last digit
* @n: is the argument
* Return 0
*/

int print_last_digit(int n)
{
if (n < 0)
{
n = n * -1;
_putchar (n % 10 + '0');
return (n % 10);
}
else
{
int last = n % 10;
_putchar('0' + last);
return (last);
}
}
