#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: number
 *
 * Return: factorial of n
 * If n is lower than 0, the function should return -1 an error
 * Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
