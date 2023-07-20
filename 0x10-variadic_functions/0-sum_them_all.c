#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - make a sum of all variables
 * @n: args number og argument
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	unsigned int i;
	int sum;
	va_list numbers;

	va_start(numbers, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
