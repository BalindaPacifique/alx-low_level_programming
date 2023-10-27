#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int j;

	numb = 1;
	for (j = 1; j <= power; j++)
		numb *= base;
	return (numb);
}

/**
 * print_binary -a function that prints a number in binary notation
 * @n: number to print
 *
 * Return: Empty
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, bobo;
	char temp;

	temp = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		bobo = n & div;
		if (bobo == div)
		{
			temp = 1;
			_putchar('1');
		}
		else if (temp == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
