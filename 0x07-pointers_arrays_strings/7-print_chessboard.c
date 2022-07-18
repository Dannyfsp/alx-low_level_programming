#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * function that prints the chessboard
 * @a: array of pieces
 */
void print_chessboard(char (*a)[8])
{
int x;
int y;
for (y = 0; y < 8; y++)
{
for (x = 0; x < 8; x++)
{
_putchar(a[y][x]);
}
_putchar('\n');
}
}
