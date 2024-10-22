#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Always 0 if Success.
 */

int main(void)

{
char alphabet;
char maj_alphabet;
for (maj_alphabet = 'A'; maj_alphabet <= 'Z'; maj_alphabet++)
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar(maj_alphabet);
putchar('\n');
return (0);
}
