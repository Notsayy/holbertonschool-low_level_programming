#include "main.h"
/**
 * _strspn - Locates a character in a string.
 * @s: The string to search
 * @accept: The character to find
 * Return: A pointer to the first occurrence of the character c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int j;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
