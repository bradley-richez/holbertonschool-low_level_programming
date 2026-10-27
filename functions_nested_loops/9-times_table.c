#include "main.h"

/**
 * times_table - function to print a table 9 times
 * Return: 0
 */

void times_table(void)
{
int row;
int col;
int n;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
n = row * col;
if (col == 0)
{
_putchar(n + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (n < 10)
{
_putchar(' ');
_putchar (n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
}
_putchar('\n');
}
}
