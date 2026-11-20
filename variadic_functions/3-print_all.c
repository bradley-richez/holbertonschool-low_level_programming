#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list *args)
{
printf("%c", va_arg(*args, int));
}
void print_integer(va_list *args)
{
printf("%d", va_arg(*args, int));
}
void print_float(va_list *args)
{
printf("%f", va_arg(*args, double));
}
void print_string(va_list *args)
{
printf("%s", va_arg(*args, char *));
}


/**
 * print_all - Prints char, int, float, and string in argument
 * @format: type format of arguments
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
unsigned int n = 0;
char *separator = "";
character characters[] = {
{'c', print_char},
{'i', print_integer},
{'f', print_float},
{'s', print_string},
{0, NULL}
};
va_start(ap, format);

while (format && *(format + i))
{
n = 0;
while (characters[n].type != *(format + i) && characters[n].f != NULL)
{
n++;
}
if (characters[n].f != NULL)
{
printf("%s", separator);
characters[n].f(&ap);
separator = ", ";
}
i++;
}
va_end(ap);
printf("\n");
}
