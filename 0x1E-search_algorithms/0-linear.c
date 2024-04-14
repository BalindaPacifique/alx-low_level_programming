#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}
	return (-1);
}
