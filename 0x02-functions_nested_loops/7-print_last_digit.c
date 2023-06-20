#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked of
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
