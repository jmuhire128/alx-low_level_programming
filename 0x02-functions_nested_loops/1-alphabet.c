#include "main.h"

/**
 *print_alphabet -  print alphabet
 *function to print alphabet
 * in lowercase function
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
