#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive nos
 * @argc: argument count
 * @argv: argument chec
 *
 * SPytechx
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	int x, n, total = 0;
	char *chec;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		n = strtol(argv[x], &chec, 10);
		if (*chec)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += n;
		}
	}
	printf("%d\n", total);

	return (0);
}
