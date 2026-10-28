#include "main.h"


void print_most_numbers(void)
{
int  n;
for (n = 0; n <= 9; n++)
{
    if(n==2){
        _putchar(' ');
    }
    else {

        _putchar(n + '0');
    }
}
_putchar('\n');
}
