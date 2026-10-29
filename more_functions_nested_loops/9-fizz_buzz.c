#include <stdio.h>

/**
 * main - function to print 1 to 100 with fizz and buzz
 * Return: 0
 */

int main(void)
{
int i;
char fizz[] = "Fizz";
char buzz[] = "Buzz";
char both[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{


if (i % 3 && i % 5 == 0)
{
printf("%s ", both);
}
else if (i % 5 == 0)
{
printf("%s ", buzz);
}
else if (i % 3 == 0)
{
printf("%s ", fizz);
}
else
{
printf("%d ", i);
}
}
}
