#include "main.h"

/**
 * is_prime_helper - Checks if a number is prime.
 * @n: The number to check.
 * @div: The current divisor to test.
 * Return: 1 if n is prime, 0 if n is not prime.
 */
int is_prime_helper(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 if n is not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
