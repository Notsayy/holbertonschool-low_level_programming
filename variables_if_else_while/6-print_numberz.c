#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');

	putchar('\n');

	return (0);
}
