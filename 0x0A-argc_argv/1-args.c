#include "main.h"

/**
 * main - a program that prints the number of arguments
 * @argc: argument count
 * @argv: array
 * Return: 0 success, else 1 error
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
