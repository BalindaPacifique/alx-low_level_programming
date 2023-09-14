#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: the number from 0 up to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
