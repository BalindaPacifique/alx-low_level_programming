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
	int i, j;

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
			free(ptr);
			for (j = 0; j <= height; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
