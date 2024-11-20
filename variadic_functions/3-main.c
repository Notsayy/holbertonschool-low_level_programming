#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'B', 3, "stSchool");
	print_all("i", 42);
	print_all("f", 3.14);
	print_all("s", NULL);
	print_all("cif", 'A', 100, 2.718);
	return (0);
}
