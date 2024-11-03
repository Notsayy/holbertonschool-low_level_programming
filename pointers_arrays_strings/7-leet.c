#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i;
	int j;
	char *leet_chars = "4433007711";
	char *leet_letters = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}
	return (str);
}
