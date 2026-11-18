#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into it, followed by a new line
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);

}
return (0);
}
