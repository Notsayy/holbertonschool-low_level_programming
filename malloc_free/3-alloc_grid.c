#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a pointer to a 2D array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 * Each element of the grid is initialized to 0.
 * Return: A pointer to the newly allocated 2D array,
 *         or NULL on failure or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
		ptr[i][j] = 0;
		}
	}
	return (ptr);
}
