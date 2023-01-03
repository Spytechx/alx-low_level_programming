#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurrence
 * @accept: matches one of bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
