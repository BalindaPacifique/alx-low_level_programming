#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: String
 * Return: 0 success, else 1
 */
void puts2(char *str)
{
	int leng = 0;

	int x = 0;

	char *y = str;

	int p;

	while (*y != '\0')
	{
		y++;
		leng++;
	}
	x = leng - 1;
	for (p = 0; p <= x; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
