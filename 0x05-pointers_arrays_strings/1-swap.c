#include "main.h"

/**
 * swap_int -swap values of input integers
 * @a: first input
 * @b: second input
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
