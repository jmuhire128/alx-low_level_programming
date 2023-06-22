/*#include <stdio.h>*/
#include "main.h"

/**
 * _isupper - function that tests if is upper or lowercase
 * @c: character to test
 *
 * Return: 1 if uppercase oe 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	/*	printf("is Uppercase");*/
		return (1);
	}
	else
	{
	/*	printf("is lowecase");*/
		return (0);
	}
}
