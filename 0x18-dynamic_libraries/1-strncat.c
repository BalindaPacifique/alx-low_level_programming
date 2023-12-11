#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @n: number of bytes from src
 * @src: string of resource
 * @dest: string of destination
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest, lensrc;

	lendest = 0;

	while (dest[lendest] != '\0')
	{
		lendest++;
	}
	lensrc = 0;
	while (lensrc < n && src[lensrc] != '\0')
	{
		dest[lendest] = src[lensrc];
		lendest++;
		lensrc++;
	}
	dest[lendest] = '\0';
	return (dest);
}
