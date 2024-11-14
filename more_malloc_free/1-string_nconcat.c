#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: ddd
 * @n: dd
 * Return: pointer to the new concatenated string, or NULL on failure
 * If NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int k;
	char *ptr;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;

	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		ptr[i + k] = s2[k];
	}

	ptr[i + n] = '\0';

	return (ptr);
}
