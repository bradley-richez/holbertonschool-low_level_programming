#include <stdio.h>
#include "main.h"

/**
 * _abs - function to determinate lowercase and uppercase
 * @n:  is the int for the argument
 * Return: 0
 */

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n - ((n - n) * 2));
}
}
