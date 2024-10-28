#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers 0 to 14.
 * Description: Write a function that prints digits
 */

void more_numbers(void)
{
int	i;
int b;
for (b = 0; b < 10; b++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
