#include <stdio.h>

/**
 * main - print numbers with 2 digits
 * only unique combinations
 * using putchar only 5times
 *
 * Return: always 0 if success
 */
int main(void)
{
	int digit_a, digit_b;

	for (digit_a = 0; digit_a < 9; digit_a++)
	{
		for (digit_b = digit_a + 1; digit_b < 10; digit_b++)
		{
			putchar((digit_a % 10) + '0');
			putchar((digit_b % 10) + '0');

			if (digit_a != 8 && digit_b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
