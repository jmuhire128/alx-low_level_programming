#include "main.h"

/**
 * factorial - return factioral of n
 * @n: number to calculate a factorial
 *
 * Return: integer
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
