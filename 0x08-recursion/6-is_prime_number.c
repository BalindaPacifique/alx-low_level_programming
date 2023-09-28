#include "main.h"

/**
 * _prime_p - a function that checjs for a prime number
 * @a: input
 * @b: denominater
 * Return: 0 for success, esle 1
 */
int _prime_p(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (_prime_p(a, b + 1));
}

/**
 * is_prime_number - a function that check for integer
 * @n: the numner to be checked
 * Return: 1 if the input integer is a prime number, else 0
 */
int is_prime_number(int n)
{
	return (_prime_p(n, 2));
}
