#include "main.h"
#include <stdio.h>

/**
 * cap_string -
 * @:
 * Return:
 */

 char *cap_string(char *str)
 {
    int i = 0;
    char separators[] = " \t\n,;.!?\"(){}";
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            
            str[i] -= ('a' - 'A');
        }
        i++;
    }
    return (str);
 }
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}