#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int i = 0;
	int r = '\n';

	while (i < 26)
	{
		_putchar (i);
		i++;
	}
	_putchar('\n');
}