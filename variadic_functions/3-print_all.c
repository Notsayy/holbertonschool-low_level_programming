#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", sep, str);
			sep = ", ";
		}
		else
		{
			i++;
			continue;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
