#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that return the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: Return a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that return the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: Return a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplie a by b
 * @a: first integer
 * @b: second integer
 * Return: Result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide a by b
 * @a: first integer
 * @b: second integer
 * Return: Result of a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a / b);
}

/**
 * op_mod - function that modulo a by b
 * @a: first integer
 * @b: second integer
 * Return: Result of a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (0);
	}
	return (a % b);
}
