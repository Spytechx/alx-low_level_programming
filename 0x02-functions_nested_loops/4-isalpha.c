#include "main.h"

/**
 * _isalpha - start point
 * @take: recieves input
 * Description: returns 0 or 1
 * Return: 0 if false and 1 if true
 */

int _isalpha(int take)
{
	if ((take >= 65 && take <= 90) || (take >= 97 && take <= 122))
	{
		return (1);
	}
	
	return (0);
}
		
