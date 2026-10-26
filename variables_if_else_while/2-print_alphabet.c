#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print every letter of the alphabet.
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
