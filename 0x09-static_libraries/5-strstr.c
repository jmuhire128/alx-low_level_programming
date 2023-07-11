#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to be checked
 * @needle: string to check in haystack
 *
 * Return: pointer to the string array
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *p = needle;

		while (*k == *p && *p != '\0')
		{
			k++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
