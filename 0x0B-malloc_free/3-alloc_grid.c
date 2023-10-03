#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of rows
 * @height: number of collumn
 *
 * Return: a pointer to array,  NULL on fail
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			ptr[k][l] = 0;
	}
	return (ptr);
}
