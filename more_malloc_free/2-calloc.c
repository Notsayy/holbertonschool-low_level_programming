#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: first string
 * @size: second string
 * Return: pointer to newly allocated space in memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;

if ((nmemb == 0) || (size == 0))
	return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
	return (NULL);

while (i < (nmemb * size))
{
	ptr[i] = 0;
	i++;
}


return ((void *)ptr);
}
