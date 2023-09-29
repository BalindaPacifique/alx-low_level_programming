#include "main.h"

/**
 * main - prints all the arguments it received
 * @argc: count the number of arguments
 * @argv: array
 * Return: 0 for success, else 1
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
