#include "main.h"

/**
 *  _sqrt_n - returns the natural square root of a number.
 * @n: number
 * Return: the square root of n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_n(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	if (b * b > n)
	{
		return (-1);
	}
	return (_sqrt_n(n, b + 1));
}
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: the square root of n
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_n(n, 0));
}

