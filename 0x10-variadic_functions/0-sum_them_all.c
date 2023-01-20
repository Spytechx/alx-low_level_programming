#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers
 * @n: the number of parameters passed
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list m;

	va_start(m, n);

		if (n == 0)
			return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(m, int);

	va_end(m);

	return (sum);
}
