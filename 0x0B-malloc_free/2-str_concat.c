#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: a pointer with s1 followed by s2, NULL for failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	char *conca;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		s1length++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		s2length++;
	}
	conca = malloc(sizeof(char) * (s1length + s2length) + 1);
	if (conca == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		conca[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		conca[s1length + i] = s2[i];
	}
	return (conca);
}
