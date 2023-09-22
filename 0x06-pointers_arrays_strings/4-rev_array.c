#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array
 * @n: number of elements of the array
 * Return: a reversed array
 */
void reverse_array(int *a, int n)
{
	int r, m;

	r = 0;
	for ( ; r < n--; r++)
	{
		m = a[r];
		a[r] = a[n];
		a[n] = m;
	}
}
