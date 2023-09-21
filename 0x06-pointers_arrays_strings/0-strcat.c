#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: a pointers with a string of destination
 * @src: a pointer with a string of source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lendest, lensrc, i;

	lendest = 0;
	lensrc = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lendest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		lensrc++;
	}

	for (i = 0; i <= lensrc; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
