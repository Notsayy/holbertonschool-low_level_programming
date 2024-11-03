#include "main.h"
/**
 * _strncpy - Copies a string.
 * @src: Source string
 * @dest: Destination string
 * @n: Maximum number of bytes to copy from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
