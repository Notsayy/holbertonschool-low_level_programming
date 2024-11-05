#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search
 * @c: The character to find
 * Return: A pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	i++;
}
return (0);
}
