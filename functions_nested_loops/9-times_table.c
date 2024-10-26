#include "main.h"

/**
 * times_table - Entry point
 * Return: empty output
 */

void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (b != 0)
{
_putchar(44);
if (c < 10)
_putchar(32);
}
_putchar(c + '0');
}
_putchar('\n');
}
}
