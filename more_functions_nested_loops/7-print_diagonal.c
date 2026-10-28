#include "main.h"




void print_diagonal(int n)
{
    int i;
    if (n > 0)
    {
        for(i = 0; i < n; i++)
        {
            _putchar('\n');
            _putchar('\\');
            
        }
    }
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}