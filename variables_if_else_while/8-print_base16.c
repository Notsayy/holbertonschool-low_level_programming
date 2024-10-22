#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description:Write a program that prints all the numbers of base 16
 * Return: Always 0 if Success.
 */

int main(void)
{
int n;

for (n = 0; n <= 9; n++)
putchar(n + '0');

for (n = 'a'; n <= 'f'; n++)
putchar(n);

putchar('\n');
return (0);
}
