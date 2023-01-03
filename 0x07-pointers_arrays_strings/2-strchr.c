#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: returns pointer to first occurrence of the character
 * @s: in string
 * Return: A pointer to the first occurrence of character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
