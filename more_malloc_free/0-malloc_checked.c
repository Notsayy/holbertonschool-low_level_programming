#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: int for memory
 * Return: a pointer to the allocated memory
 * If fails, function should cause normal termination with a status of 98
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
