#include "main.h"

/**
 * more_numbers - Print 0 to 10, 14 times
 * Return: 0
 */
void more_numbers(void)
{
int i;
int loop;

for (loop = 0; loop < 10; loop++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar((i / 10) + '0');
}
_putchar ((i % 10) + '0');
}
_putchar('\n');
}
}
