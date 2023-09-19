#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string to test the length
 * Return: 0 success, else 1 error
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
