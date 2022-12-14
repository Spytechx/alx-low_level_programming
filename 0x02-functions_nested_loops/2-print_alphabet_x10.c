#include "main.h"

/**
 * print_alphabet_x10 -STart Point
 *
 * Description: Print10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int lowercase;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);

			if (lowercase == 'z')
			{
				_putchar('\n');
			}
		}
	}
}
