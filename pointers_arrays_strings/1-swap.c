#include "main.h"

/**
 * swap_int - change two numbers
 * @a: int
 * @b: int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
