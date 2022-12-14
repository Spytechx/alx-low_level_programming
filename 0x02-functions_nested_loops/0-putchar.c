#include "main.h"

/**
 * main - Start print putchar
 *
 * compiled by spytechx
 *
 * Return: 0 (success)
 */

int main(void)
{
	int h;
	char output[8] = "putchar";

	for (h = 0; h < 8; h++)
	{
		_putchar(output[h]);

		if (h == 7)
		{
			_putchar('\n');
		}
	}
	return (0);
}
