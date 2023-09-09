#include <stdio.h>

/**
 * main - prints alphabet in apper and lower letter
 * Return; 0 (Success)
 */
int main(void)

{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
