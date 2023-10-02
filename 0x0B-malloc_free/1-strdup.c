#include "main.h"

/**
 * _strdup - a function that returns a pointer
 *  which contains a copy of the string given as a parameter
 *  @str: a pointer with a string
 *  Return: str if success, else NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int n = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	ptr = (char *)malloc((n + 1) * sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
