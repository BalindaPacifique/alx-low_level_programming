#include <stdio.h>
/**
 * main - print a single number from base ten
 *
 * Return: 0 success, else 1 error
 */
int main(void)
{
	int base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
