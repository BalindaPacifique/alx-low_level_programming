#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * return: 1 for positive num , -1 for negative num, or zero else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
