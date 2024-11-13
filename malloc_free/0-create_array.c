#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that prints an array of chars
 * @size: size of the array
 * @c: different characters
 * Return: NULL if size = 0
 * Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
