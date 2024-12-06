#include "main.h"
/**
 * binary_to_uint - function that converts binary number to an int
 * @b: Pointer to a string of 0 and 1 char
 *
 * Return: the converted number, or 0 if there is more
 * chars in the string b that is not 0 or 1 or
 * if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		result = result * 2 + (b[count] - '0');
		count++;
	}

	return (result);
}
