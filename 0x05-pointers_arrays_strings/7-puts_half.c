#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i = 0;
	int leng = 0;

	while (str[i] != '\0')
	{
		leng++;
		i++;
	}

	if (leng % 2 == 0)
	{
		i = leng / 2;
	}
	else
	{
		i = (leng - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
