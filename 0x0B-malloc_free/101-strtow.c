#include "main.h"
#include <string.h>

/**
 * count_word -  a function that count a number of words in a string
 * @s: a pointer with string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		if (strcmp(s[x], "") == 0)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}
/**
 * strtow - a function that splits a string into words
 * @str: a pointer with string
 *
 * Return: a pointer to an array of strings (words), else NULL
 * Each element of this array should contain a single word
 * The last element of the returned array should be NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, k = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (strcmp(str[n], "") == 0 || str[n] == '\0')
		{
			if (x)
			{
				end = n;
				tmp = (char *)malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - x;
				k++;

				x = 0;
			}
		}
		else if (x++ == 0)
			start = n;
	}
	matrix[k] = NULL;
	return (matrix);
}
