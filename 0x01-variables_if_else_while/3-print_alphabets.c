#include <stdio.h>

/**
 * main - printing letters
 * using putchar 3times only
 * lowercase followed by uppercase
 *
 * Return: always 0 if success
 */
int main(void)
{
	char lower_letter, upper_letter;

	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
	{
		putchar(lower_letter);
	}
	for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
	{
		putchar(upper_letter);
	}
	putchar('\n');
	return (0);
}
