#include "variadic_functions.h"
#include <stdarg.h>

#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *str;

    va_list ap;
    va_start(ap,n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(ap,char *);
        printf("%s",str);
        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }

    }
    
    
    va_end(ap);
    
    printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}