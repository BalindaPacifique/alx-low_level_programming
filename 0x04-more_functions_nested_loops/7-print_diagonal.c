#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the termina
 * @n: is the number of times the character \ should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i <= n ; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == i)
				_putchar('\\');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
