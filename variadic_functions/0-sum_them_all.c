#include "variadic_functions.h"
#include <stdarg.h>

#include <stdio.h>

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameter
 * @...: possible other parameters
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ap;
va_start(ap, n);

if (n == 0)
{
return (0);
}
for (i = 0; i < n ; i++)
{
sum += va_arg(ap, int);
}



va_end(ap);
return (sum);
}
