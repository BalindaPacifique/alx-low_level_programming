#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, j;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (j = 0; j < n; j++)
	{
		if (j == n - 1)
		{
			printf("%02hhx\n", a[j]);
			break;
		}
		printf("%02hhx ", a[j]);
	}
	return (0);
}
