#include "main.h"

/**
 * _strlen - returns length of string
 * @s: revieves input
 * Return: 0;
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
