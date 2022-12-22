#include "main.h"
/**
 * _strcmp - compare 2 string
 * @str1:string 1
 * @str2:string 2
 * Return: int
 */
int _strcmp(char *str1, char *str2)
{
	while (((*str1 != '\0') && (*str2 != '\0')) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	if (*str1 == *str2)
	{
		return (0);
	}

	else
	{
		return (*str1 - *str2);
	}
}
