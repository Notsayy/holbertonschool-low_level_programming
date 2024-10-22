#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Always 0 if Success.
 */

int main(void)

{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)

		putchar(alphabet);
	putchar('\n');
	return (0);
}
