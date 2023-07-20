#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function wit parameters
 * @format: char type pointer to string
 *
 * Description: prints anything followed by a new line
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int j;
	char *str;
	char *space;
	va_list list;

	va_start(list, format);
	j = 0;
	while (format && format[j])
	{
		space = "";
		if (format[j + 1])
			space = ", ";
		switch (format[j])
		{

		case 'c':
			printf("%c%s", va_arg(list, int), space);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), space);
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, space);
			break;
		}
		j++;
	}
	printf("\n");
}
