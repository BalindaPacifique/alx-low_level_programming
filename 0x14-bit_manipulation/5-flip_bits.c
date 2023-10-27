#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, numbbit = 0;
	unsigned long int temp;
	unsigned long int bobo = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		temp = bobo >> j;
		if (temp & 1)
			numbbit++;
	}

	return (numbbit);
}
