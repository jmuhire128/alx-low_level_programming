#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 0 times
 * all in lowercase
 * no use of stdio.h
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
