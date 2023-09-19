#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: String
 * Return: 0 success, else 1 error
 */
void rev_string(char *s)
{
	char rev = s[0];
	int element = 0;
	int o;

	while (s[element] != '\0')
	{
		element++;
	}
	for (o = 0; o < element; o++)
	{
		element--;
		rev = s[o];
		s[o] = s[element];
		s[element] = rev;
	}
}
