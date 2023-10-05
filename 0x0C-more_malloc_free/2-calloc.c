#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills a memory with a constant
 * @ptr: memory space to be filled
 * @b: char variable to be copied
 * @n: number of times to copy
 *
 * Return: the a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @size: bytes
 * @nmemb: number of element in array
 *
 * Return: s pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	_memset(a, 0, nmemb * size);
	return (a);
}
