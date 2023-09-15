#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * Return: enpty
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
