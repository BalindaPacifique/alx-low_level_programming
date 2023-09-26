#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: string
 * @size: the size
 * Return: empty
 */
void print_diagsums(int *a, int size)
{
	int j, sum0 = 0, sum1 = 0;

	for (j = 0; j < size; j++)
	{
		sum0 += a[j];
		a += size;
	}
	a -= size;

	for (j = 0; j < size; j++)
	{
		sum1 += a[j];
		a -= size;
	}
	printf("%d, %d\n", sum0, sum1);
}
