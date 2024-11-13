#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new concatenated string, or NULL on failure
 * If NULL is passed, treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));
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

	ptr[i + j] = '\0';

	return (ptr);
}
