#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 * Description: This function prints numbers from the given integer n
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n += (n < 98) ? 1 : -1;
	}
	printf("98\n");
}
