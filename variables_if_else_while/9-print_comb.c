#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print every numbers of base 16 followed by ", ".
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;
for (letter = '0'; letter <= '9'; letter++)
{
putchar(letter);
putchar(',');
putchar(' ');
}

return (0);
}
