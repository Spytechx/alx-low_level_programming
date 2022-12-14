#include "main.h"

/**
 * _islower - Start Point
 * Description: returns 1 or 0
 * @take: recieves info
 * Return: 1 is true and 0 is false
 */

int _islower(int take)
{
	if (take >= 'a' && take <= 'z')
		return (1);
	else
		return (0);
}
