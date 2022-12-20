#include "main.h"

/**
 * puts_half - prints the half of a string
 * @str: recieving string to check
 * Return: null
 */

void puts_half(char *str)
{
	int rec = 0, x;

	while (str[rec] != '\0')
		rec++;
	if (rec + 1 % 2 != '0')
		x = (rec - 1) / 2;
	else
		x = (rec / 2);
	x++;

	for (rec = x; str[rec] != '\0'; rec++)
		_putchar(str[rec]);
	_putchar('\0');
}
				}
