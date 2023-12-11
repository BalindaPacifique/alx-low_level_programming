#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @n: bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @b: constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
