#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: a vule to compute
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
