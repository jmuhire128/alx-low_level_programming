#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to s
 * @s: pointer block of memory to fill
 * @b: char to set
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
