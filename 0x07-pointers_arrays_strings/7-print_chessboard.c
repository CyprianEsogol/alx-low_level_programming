#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	x = 0;
	while (x < 8)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
	x++;
}
