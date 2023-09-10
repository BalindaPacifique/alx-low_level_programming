#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the last digit of the number stored in the variable
 * Return: 0 (Success) eslse 1 error
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastd = n % 10;

	printf("Last digit of %d is %d and is\n", n, lastd);

	if (lastd > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
