#include "main.h"
#include <stdlib.h>



/**
 * malloc_checked - check memory allocated
 * @b: bytes allocated
 * Return: pointer allocated memomy
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
