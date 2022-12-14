#include "main.h"

/**
 * print_last_digit - Start Point
 * @x: takes input
 * Description: returns 1 or 0
 * Return: 1 is true and 0 is false
 */

int print_last_digit(int x)
{
	int ld;

	ld = x % 10;

	if (ld < 0)
	{
		ld *= -1;
	}

	_putchar(ld + '0');

	return (ld);
}
