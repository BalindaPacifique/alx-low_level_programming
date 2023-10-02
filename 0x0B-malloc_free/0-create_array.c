#include "main.h"

/**
 * create_array - a function which create an array
 * @size: the size of array
 * @c: the characters of array
 *
 * Return: pointer for success, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
