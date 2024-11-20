#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - Returns the sum of all its parameters.
* @n: String to be printed between numbers
* @separator: String to be printed between numbers
* Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
