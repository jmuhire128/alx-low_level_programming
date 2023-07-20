#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function with 3 parameter
 * @separator: char type pointer to string
 * @n: number of arguments
 * @...: variable arguments
 *
 * Description: prints string followed by a new line
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *ptr;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
