#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int in = 0;
	int min = 1;
	int si = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			si = 1;
			in = (in * 10) + (s[x] - '0');
			x++;
		}

		if (si == 1)
		{
			break;
		}

		x++;
	}

	in *= min;

	return (in);
}
