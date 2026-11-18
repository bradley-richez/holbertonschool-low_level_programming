#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two number of arguments
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argv == NULL || argc > 3 || argv[1] == NULL || argv[2] == NULL)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = (num1 *num2);
printf("%d\n", result);
return (0);
}
