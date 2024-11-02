#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * @str: string
 */
void puts_half(char *str)

{
	int length = 0;
	int i;
	int j;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length / 2) + 1;
	}
	for (j = i; j < length; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
