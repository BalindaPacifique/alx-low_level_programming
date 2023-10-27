#include"main.h"

/**
 * get_bit - prog returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, else -1 error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, bobo;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	div = 1 << index;
	bobo = n & div;
	if (bobo == div)
	{
		return (1);
	}
	return (0);
}

