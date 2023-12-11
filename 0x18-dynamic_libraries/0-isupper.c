#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: uppercase character to be checked
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
