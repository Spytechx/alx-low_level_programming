#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[i][y]);
		}

		_putchar('\n');
	}
}
