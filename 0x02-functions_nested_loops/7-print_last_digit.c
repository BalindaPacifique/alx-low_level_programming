#include "main.h"

/**
 * print_last_digit - Prints the last digits of a number
 * @n: the number to be treated
 * Return: value of the last digit of a number
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
