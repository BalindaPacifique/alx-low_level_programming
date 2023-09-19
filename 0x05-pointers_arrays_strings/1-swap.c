#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: a value to swap
 * @b: a value a value to swap
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
