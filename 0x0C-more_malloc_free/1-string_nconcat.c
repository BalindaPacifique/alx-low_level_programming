#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of values
 *
 * Return: a pointer if not is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
	{
		leng1++;
	}
	while (s2 && s2[leng2])
	{
		leng2++;
	}
	if (n < leng2)
	{
		str = malloc(sizeof(char) * (leng1 + n + 1));
	}
	if (!str)
	{
		return (NULL);
	}
	while (i < leng1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < leng2 && i < (leng1 + n))
	{
		str[i++] = s2[j++];
	}
	while (n >= leng2 && i < (leng1 + leng2))
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
