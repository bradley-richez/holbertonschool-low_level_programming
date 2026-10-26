#include "main.h"

/**
* main - Entry point
* Description: Print alphabet 10 times.
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;
char j;
for (i = 0; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(i);
}
_putchar('\n');
}
}
