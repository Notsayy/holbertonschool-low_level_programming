#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @src: Source string
 * @dest: Destination string
 * @n: Maximum number of bytes to use from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (j < n)
		dest[i] = '\0';

	return (dest);
}
