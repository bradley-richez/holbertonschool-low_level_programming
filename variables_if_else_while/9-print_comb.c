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
char n;
for (n = '0'; n <= '9'; n++)
{
    putchar(n);
    if (n != '9')
    {
        putchar(',');
        putchar(' ');
    }
}
return (0);
}
