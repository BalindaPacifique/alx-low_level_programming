#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: a digit to be cheked
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
