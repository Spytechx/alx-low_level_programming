#include <stdio.h>
/*betty style doc for main function enters here*/
/**
 * main - this is the beginning part of the program
 *
 * Return: returns default value 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	for (i = 65; i <= 90; i++)
		putchar(i);

	putchar(10);

	return (0);
}
