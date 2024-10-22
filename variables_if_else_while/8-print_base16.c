#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description:Write a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 if Success.
 */

int main(void)

{
int alphabet;
int digits;

for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);

for (digits = 0; digits <=9; digits++)
putchar(digits);

putchar('\n');
return (0);
}