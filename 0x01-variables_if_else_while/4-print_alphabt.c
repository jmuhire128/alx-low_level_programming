#include <stdio.h>

/**
 * main - print letters except q, e
 * lower case only
 * use putchar twice only
 *
 * Return: always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
