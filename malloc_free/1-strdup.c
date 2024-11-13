#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[len] = '\0';

	return (ptr);
}
