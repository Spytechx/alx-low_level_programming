#include "main.h"
/**
 * _strcpy - copy the string by src
 * @dest: input character 1
 * @src: input charcter 2 to check
 * Return: 0
 */


char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
