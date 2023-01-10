#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer pointing to a newly allocated space
 * and NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, mi1, mi2, mi;
	char *output;

	mi1 = mi2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			mi1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			mi2++;
	}

	mi = mi1 + mi2;
	output = (char *)malloc(sizeof(char) * (mi + 1));
	if (output == NULL)
		return (NULL);

	for (x = 0; x < mi1; x++)
		output[x] = s1[x];
	for (y = 0; y < mi2; y++, x++)
		output[x] = s2[y];
	output[mi] = '\0';


	return (output);
}
