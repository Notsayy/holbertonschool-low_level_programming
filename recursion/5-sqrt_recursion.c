#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 * Return: The square root if it exists, or -1 if it does not.
 */
int _sqrt_helper(int n, int guess)
{
	if (n < 0)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_helper(n, 2));
}
