#include <stdio.h>

/**
 *  main - Starting POint
 *
 *  Return: print 0 (Success)
 */

int main(void)

{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 98; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\');
	return (0);
}
