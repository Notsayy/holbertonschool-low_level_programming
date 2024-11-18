#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Executes a function  on each element of an array.
 * @array: Name to be printed
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = (size_t)-1;

	if (array == NULL || action == NULL || size == 0)
	return;
	for (i = 0 ; i < size; i++)
	action(array[i]);
}
