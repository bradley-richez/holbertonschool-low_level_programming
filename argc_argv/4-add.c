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
    int i,result = 0;
    
    if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
    for (i = 1; i < argc; i++)
    {
        result += atoi(argv[i]);        
    }
    printf("%d\n",result);
    return (0);
}
