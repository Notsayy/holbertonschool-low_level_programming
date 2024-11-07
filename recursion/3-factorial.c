#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: Pointer to the given number
 * Return: The factorial of the number or an error if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
