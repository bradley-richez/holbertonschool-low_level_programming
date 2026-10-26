#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: Print the alphabet in lowercase except q and e.
* Return: Always 0 (Success
*/
int main(void)
{
char letter = 'a';
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return(0);
}
