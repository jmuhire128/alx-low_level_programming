#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @src: memory to be copied
 * @dest: where to copy
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
