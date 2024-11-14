#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
int *ptr;
int i = 0;

if (min > max)
	return (NULL);

ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
	return (NULL);

for (i = 0; i <= (max - min); i++)
{
	ptr[i] = min + i;
}
return (ptr);
}
