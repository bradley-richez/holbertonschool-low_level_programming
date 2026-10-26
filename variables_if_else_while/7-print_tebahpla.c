#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
* Description: Print the alphabet in reverse order.
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
