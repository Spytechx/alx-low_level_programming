#include "main.h"

/**
 * print_sign - start point
 * @x: takes input
 * Description: returns 0 or 1
 * Return: 0 is false and 1 is true
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (x == 0)
		{
			_putchar('0');
			return (0);
		}
	_putchar('-');

	return (-1);
}
