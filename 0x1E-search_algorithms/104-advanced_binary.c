#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the current array (or subarray) being searched.
 * @array: Pointer to the first element of the array.
 * @left: The starting index of the subarray to print.
 * @right: The ending index of the subarray to print.
 */
void print_array(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * advanced_binary_recursive - Helper function to recursively perform
 *                             advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    if (left > right)
        return (-1);

    print_array(array, left, right);

    size_t mid = left + (right - left) / 2;

    if (array[mid] == value && (mid == left || array[mid - 1] != value))
        return (mid);

    if (array[mid] >= value)
        return advanced_binary_recursive(array, left, mid, value);

    return advanced_binary_recursive(array, mid + 1, right, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not present.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return advanced_binary_recursive(array, 0, size - 1, value);
}

