#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memore which contains a copy of the
 * string given as a parameter
 * @str: the string input
 * Return: returns a pointer which is a duplicate of str
 * or NUMM if memory isn't available
 */

char *_strdup(char *str)
{
	char *copy;
	int y, x = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	copy = (char *)malloc((sizeof(char) * x) + 1);
	if (copy == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		copy[y] = str[y];
	copy[x] = '\0';

	return (copy);
}
