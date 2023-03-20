#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be recieved
 * Return: length of string
 */

void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
