#include "main.h"
#include <stdlib.h>

/**
 * _realloc - that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a;
	int *prev_a;
	unsigned int j;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	a = malloc(new_size);
	if (!a)
	{
		return (NULL);
	}
	prev_a = ptr;
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			a[j] = prev_a[j];
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			a[j] = prev_a[j];
	}
	free(ptr);
	return (a);
}
