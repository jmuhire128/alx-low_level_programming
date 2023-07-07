#include "main.h"

/**
 * _print_rev_recursion - print string in Reverse
 * @s: string to print
 *
 * Return: void(nada)
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
