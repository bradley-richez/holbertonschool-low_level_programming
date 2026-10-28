#include "main.h"


void print_most_numbers(void)
{
int  n;
for (n = 0; n <= 9; n++)
{
    if (n != 2 || 4)
    {
        _putchar(n + '0');
    }
}
_putchar('\n');
return (0);
}



// char letter = 'a';
// for (letter = 'a'; letter <= 'z'; letter++)
// {
// if (letter != 'q' && letter != 'e')
// {
// putchar(letter);
// }
// }
// putchar('\n');
// return (0);