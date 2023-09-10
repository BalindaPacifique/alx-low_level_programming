#include <stdio.h>
/**
 * main -  a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 success, else 1 error
 */
int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
