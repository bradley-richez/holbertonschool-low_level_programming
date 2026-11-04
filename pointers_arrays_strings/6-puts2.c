#include "main.h"

/**
 * puts2 - print every other character of
 * @str: string
 */

void puts2(char *str)
{
    int i;
    char c;
    for (i=0;str[i] != 0;i++){
        if (i % 2 == 0){
            c = str[i];
            _putchar(c);
        }
    }
    _putchar('\n');
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}