#include <stdio.h>
/**
 * print_chessboard - Prints a chessboard
 * @a: Pointer to an array
 */
void print_chessboard(char (*a)[8])
{
int row, col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
printf("%c", a[row][col]);
}
printf("\n");
}
}
