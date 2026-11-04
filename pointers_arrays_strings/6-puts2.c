#include "main.h"

/**
 * puts2 - print every other character of
 * @str: string
 */

void puts2(char *str)
{
int i;
char c;
for (i = 0; str[i] != 0; i++)
{
if (i % 2 == 0)
{
c = str[i];
_putchar(c);
}
}
_putchar('\n');
}
