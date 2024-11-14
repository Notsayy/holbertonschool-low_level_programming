#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated space in memory, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int k = 0;
	unsigned int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[l])
		l++;

	if (n >= l)
		n = l;

	ptr = malloc(sizeof(char) * (k + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
