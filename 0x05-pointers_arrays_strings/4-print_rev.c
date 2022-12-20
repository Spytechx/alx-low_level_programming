#include "main.h"

/**
 * print_rev- prints a reverse string
 * @s: string thats printed
 * Return: none
 */

void print_rev(char *s)
{
	int x, y;

	y = 0;

	while (s[y] != '\0')
		y++;
	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
