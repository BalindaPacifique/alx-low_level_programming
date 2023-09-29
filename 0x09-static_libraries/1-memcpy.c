#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: bytes
 * @src: source of memory
 * @dest: destination of memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
