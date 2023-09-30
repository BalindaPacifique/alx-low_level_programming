#include "main.h"

/**
 * main - print the sum of two positive numbers
 * @argc: argument count
 * @argv: array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int p, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (p = 0; p < strlen(e); p++)
			{
				if (e[p] < 48 || e[p] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

