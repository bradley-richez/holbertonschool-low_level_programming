#include "main.h"

/**
 * jack_bauer - function to print 24 hours
 * Return: 0
 */

void jack_bauer(void)
{
int hour;
int minute;
for (hour = 0; hour < 59; hour++)
{
for (minute = 0; minute <= 24; minute++)
{
_putchar(hour);
_putchar(minute);
}
}
}
