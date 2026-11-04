#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: Integer convert of string
 */
int _atoi(char *s){
    int i = 0;
    int result = 0;
    int sign = 1;

    while(s[i] == ' '){
        i++;
    }
    if( s[i] == '-'){
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (result * sign);
}


int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}