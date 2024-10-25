#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * Description: Write a function that prints the last digit of a number.
 * @r: The character to check
 * Return: r if >= 0 , else -r
 */

int print_last_digit(int r)
{
int d = r % 10;
if (d < 0)
{
d = -d;
}
_putchar('0' + d);
return (d);
}
