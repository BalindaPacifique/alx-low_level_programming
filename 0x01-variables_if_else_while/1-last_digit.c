#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the last digit of the number stored in the variable
 * return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("last digits of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last digits of %d is %d and is equal to zero\n", n, lastd);
	}
	else
	{
		printf("last digits of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
