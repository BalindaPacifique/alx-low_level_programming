#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: is the number of times the character _ should be printed
 * Return: enpty
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
