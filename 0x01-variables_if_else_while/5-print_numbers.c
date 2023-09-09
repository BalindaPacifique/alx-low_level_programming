#include <stdio.h>
/**
 * mai - prints numbers of base ten
 * Return: 0 (Success)
 */
int main(void)

{
	int base_ten = '0';

	while (base_ten <= 10)
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
