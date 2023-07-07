#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to be studied
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n = 1;
		n += _strlen_recursion(s + 1);
	}
	else
	{
		n = 0;
	}
	return (n);
}
