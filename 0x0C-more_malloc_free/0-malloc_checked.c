#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: a variable
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == 0)
	{
		exit(98);
	}
	return (a);
}
