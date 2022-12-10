#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the beginning of the program
 *
 * Return: default value of 0 returned
 */
int main(void)
{
	int n;
	int xl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	xl = n % 10;
	if (xl > 5)
	{
		printf("Last digit of %d is %d and is greater tha 5\n", n, xl);
	}
	if (xl == 0)
	{
		printf("Last digit of %d is %d and it is 0\n", n, xl);
	}
	if (xl < 6 && xl != 0)
	{
		printf("Last digit of %d is %d and it is less than 6 and not 0\n", n, xl);
	}
	return (0);

}
