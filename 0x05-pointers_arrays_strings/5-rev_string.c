#include "main.h"

/**
 * rev_string - reverse a string
 * _putchar - print each character
 * @s: char for input
 * Return: null
 */

void rev_string(char *s)
{
	int x = 0, y, z;
	char m;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		m = s[y];
		s[y] = s[z];
		s[z] = m;
	}
}
