#include "main.h"


void print_most_numbers(void)
{
int  n;
for (n = 0; n <= 9; n++)
{
    if (n == 2 && n == 4)
    {
        return (0);
    }
    else
    _putchar(n + '0');
}
_putchar('\n');
}
