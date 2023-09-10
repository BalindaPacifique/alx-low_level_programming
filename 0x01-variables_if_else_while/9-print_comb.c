#include <stdio.h>
/**
 * main - combination of single-digit numbers followed by ' and space
 *
 * Return: 0 success, else 1 error
 */
int main(void)
{
	int number = '0';

	while (number <= '9')

	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
