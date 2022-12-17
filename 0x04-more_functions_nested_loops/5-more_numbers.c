#include "main.h"

/**
 *  more_numbers - prints 0 - 14 x10
 *  Return: void
 */

void more_numbers(void)
{
	int num;
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		if (num > 9)
			_putchar((num / 10) + '0');

		_putchar((num % 10) + '0')
	}
_putchar (10);
}
