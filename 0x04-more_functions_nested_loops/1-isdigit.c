#include "main.h"

/**
 * _isdigit - check wether is a digit or not
 * @c: to bet tested
 *
 * Return: 1 if is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
