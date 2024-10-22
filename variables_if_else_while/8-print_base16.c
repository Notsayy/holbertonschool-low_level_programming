#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description:Write a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 if Success.
 */

int main(void)

{
int n;

for (n = 'a'; n <= 'f'; n++)
putchar(n);

for (n = 0; n <=9; n++)
putchar(n);

putchar('\n');
return (0);
}