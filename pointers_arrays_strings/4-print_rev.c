#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 * @s: reverse string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
