#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to be printed
 * Return: 0 success, else 1 error
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
