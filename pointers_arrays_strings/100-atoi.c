#include "main.h"

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
