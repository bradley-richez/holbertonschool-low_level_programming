#include "main.h"

/**
* main - check the code
* print_last_digit is a function to return the last digit
* @n: is the argument
* Return 0
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
