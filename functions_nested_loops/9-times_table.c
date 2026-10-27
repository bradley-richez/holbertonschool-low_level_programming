#include "main.h"

/**
 * void times_table - function to print a table 9 times
 * Return: 0
 */

void times_table(void)
{
    int row;
    int col;
    int n;

    for (row=0;row<9;row++){
        for (col=0;col<9;col++){
            _putchar(col + '0');
        }
        _putchar('\n');
    }
}