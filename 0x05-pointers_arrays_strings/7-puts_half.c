#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: String
 * followed by a new line
 * Return: 0 success. else 1 error
 */
void puts_half(char *str)
{
	int p = 0;
	int leng = 0;

	while (str[p] != '\0')
	{
		leng++;
		p++;
	}
	if (leng % 2 == 0)
	{
		p = leng / 2;
	}
	else
	{
		p = (leng - 1) / 2;
	}
	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
