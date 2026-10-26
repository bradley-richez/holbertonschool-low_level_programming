#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print the alphabet inlowercase and uppercase.
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
