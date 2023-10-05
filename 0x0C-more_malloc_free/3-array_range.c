#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum range
 * @max: maximum range
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int j, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		a[j] = min++;
	}
	return (a);
}
