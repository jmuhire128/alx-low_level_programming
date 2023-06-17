#include <stdio.h>

/**
 * main - print numbers
 * 3digits but unique combination
 * followed by , and space
 * use putchar only 6 timesmax
 *
 * Return: always 0 if success
 */

int main(void)
{
	int digit_a, digit_b, digit_c;

	for (digit_a = 0; digit_a < 8; digit_a++)
	{
		for (digit_b = digit_a + 1; digit_b < 9; digit_b++)
		{
			for (digit_c = digit_b + 1; digit_c < 10; digit_c++)
			{
				putchar((digit_a % 10) + '0');
				putchar((digit_b % 10) + '0');
				putchar((digit_c % 10) + '0');

				if (digit_a != 7 || digit_b != 8 || digit_c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
