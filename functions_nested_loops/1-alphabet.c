#include "main.h"

/**
 * print_alphabet - print the alphabet
 * Description: Write a function that prints the alphabet
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
