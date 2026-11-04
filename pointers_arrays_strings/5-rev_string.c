#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * REturn: 0
 */
void rev_string(char *s)
{
char temp;
char *first = s;
char *end = s;

while (*end != '\0')
{
end++;
}
end--;
while (first < end)
{
temp = *first;
*first = *end;
*end = temp;

first++;
end--;
}
}
