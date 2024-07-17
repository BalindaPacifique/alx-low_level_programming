#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not present.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
		if (i >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);

	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

