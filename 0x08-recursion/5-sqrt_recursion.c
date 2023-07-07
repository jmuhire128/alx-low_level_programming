#include "main.h"

/**
 * root - find root of number
 * @n: number
 * @i: iterator
 *
 * Return: integer
 */
int root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i <= n)
	{
		return (root(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - return square root of number
 * @n: number to sqrt
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (root(n, 2));
	}
}
