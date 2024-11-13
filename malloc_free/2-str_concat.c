#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i = 0;
unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
	ptr[i] = s1[i];
	i++;
	}
	while (j < len2)
	{
	ptr[len1 + j] = s2[j];
	j++;
	}
	ptr[len1 + len2] = '\0';

	return (ptr);
}
