#include <stdio.h>

/**
 * sum_to_n - function addition with
 * @n: integer
 */

int sum_to_n(int n)
{
int i;
int sum = 0;

for (i = 1; i <= n; i++)
sum += i;

return (sum);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */

int main(void)
{
printf("%d\n", sum_to_n(10));
return (0);
}
