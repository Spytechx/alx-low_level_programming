#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main- this is the entry point of the program
 *
 * Return: this returns a default value of 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("Last digit of %d is %d and is positive >0\n", n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d is zero 0\n", n);
	}
	if (n < 0)
	{
		printf("Last digit of %d is %d and is negative <0\n", n);
	return (0);
	}
}
