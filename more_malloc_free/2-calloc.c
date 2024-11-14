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
unsigned int result = (nmemb * size);
void *ptr;
unsigned char *str;
unsigned int i = 0;

if ((nmemb == 0) || (size == 0))
	return (NULL);

ptr = malloc(result);
if (ptr == NULL)
	return (NULL);


str = (unsigned char *)ptr;
while (i < result)
i++;
str[i] = 0;

return (ptr);
}
