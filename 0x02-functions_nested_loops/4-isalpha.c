#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 63  && c <= 94) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
