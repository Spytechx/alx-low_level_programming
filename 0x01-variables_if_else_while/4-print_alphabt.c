#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main- this is the beginning of the program
 *
 * Return: default value of 0 returns
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar(10);
	return (0);
}
