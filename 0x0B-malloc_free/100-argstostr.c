#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: variable
 * @av: two dimention pointer
 *
 * Return:a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
			y++;
	}
	y += ac;
	ptr = malloc(sizeof(char) * y + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		if (ptr[x] == '\0')
		{
			ptr[x++] = '\n';
		}
	}
	return (ptr);
}
