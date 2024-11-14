#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that concatenates two strings
 * @b: string 1
 * Return: pointer to the new concatenated string, or NULL on failure
 * If NULL is passed, treat it as an empty string
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
