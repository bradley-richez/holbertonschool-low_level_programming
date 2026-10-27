#include "main.h"

/**
 * jack_bauer - function to print 24 hours
 * Return: 0
 */

void jack_bauer(void)
{
int hour;
int minute;
for (hour = 0; hour < 60; hour++)
{
for (minute = 0; minute < 24; minute++)
{
_putchar(hour + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar('\n');
}
}
}
