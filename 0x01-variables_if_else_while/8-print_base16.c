#include <stdio.h>

/**
 * main - print 16 hexadecimal numbers
 * in lowercase
 * using putchar only
 *
 * Return: always 0 if success
 */

int main(void)
{
	char number, letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
