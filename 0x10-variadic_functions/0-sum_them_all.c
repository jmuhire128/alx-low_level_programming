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
	unsigned int i;
	int sum;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; sum = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);
	return (sum);
}
