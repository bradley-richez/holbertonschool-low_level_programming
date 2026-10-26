#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Description: Print a random number and say what is the last digit,
* if greater than 5, less than 6 or if 0.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
    int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_number = n % 10;
    if (last_number > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_number);
    }
    else if (last_number == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last_number);
    }
    else {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_number);
    }
	return (0);
}