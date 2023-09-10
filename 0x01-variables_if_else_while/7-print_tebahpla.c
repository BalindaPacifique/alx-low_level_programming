#include <stdio.h>
/**
 * main -  a program that prints the lowercase alphabet in reverse
 *
 * Return: 0 success, else 1 error
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
