#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - calculate the length of string
 * @s: string to count
 *
 * Return: integer, length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker - helper function
 * @s: string to check
 * @l: length of string
 * @n: count
 *
 * Return: integer
 */
int checker(char *s, int l, int n)
{
	if (n >= l)
	{
		return (1);
	}
	
	if (s[n] == s[l])
	{
		return (checker(s, l - 1, n + 1));
	}
	return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: string to check
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int l, n; /* l: length, n: count */

	l = _strlen_recursion(s);
	n = 0;
	return (checker(s, l - 1, n));
}
