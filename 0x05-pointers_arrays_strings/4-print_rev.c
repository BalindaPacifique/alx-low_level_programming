#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string
 * Return: 0 success, else 1 error
 */
void print_rev(char *s)
{
	int leng = 0;
	int i;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = leng; i >= 0; i--)
	{
		_putchar(s[leng]);
		s--;
	}
	_putchar('\n');
}
