#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: variables
 *
 * Return: If n == 0, return 0, else 1 error
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int j, sum = 0;

	va_start(a, n);

	for (j = 0; j < n; j++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
