#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a character from the argument list.
 * @args: The argument list.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer from the argument list.
 * @args: The argument list.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float from the argument list.
 * @args: The argument list.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string from the argument list.
 * @args: The argument list.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format provided.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char *sep = "";

	void (*print_funcs[])(va_list) = {print_char, print_int,
		print_float, print_string};
	char format_specifiers[] = {'c', 'i', 'f', 's'};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < sizeof(format_specifiers) / sizeof(format_specifiers[0]))
		{
			if (format[i] == format_specifiers[j])
			{
				printf("%s", sep);
				print_funcs[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
