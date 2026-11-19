#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


void print_all(const char * const format, ...)
{
    va_list ap;
    va_start(ap,format);
    va_end(ap);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}