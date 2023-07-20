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
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; sum = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}

		va_end(list);

		return (sum);
	}
}
