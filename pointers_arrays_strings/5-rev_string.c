#include "main.h"
#include <stdio.h>


/**
 * rev_string - reverse string
 * @s: string
 * REturn: 0
 */
void rev_string(char *s)
{
    char temp;
    int len = _strlen(s) - 1;
    int i;
    int k = len;

    for(i = 0; i < len; i++)
    {
        temp = s[k];
        s[k] = s[i];
        s[i] = temp;
        k--;

        /* As 2 characters are changing place for each cycle of the loop
           only traverse half the array of characters */
        if(k == (len / 2))
        {
            break;
        }
    }
    
}