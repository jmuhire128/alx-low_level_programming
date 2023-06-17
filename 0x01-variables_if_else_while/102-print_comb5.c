#include <stdio.h>
/**
 * main - prints numbers by 4digits
 * use putchar 8times only
 * unique combinations with space
 *
 * Return: always 0 if success
 */

int main(void)
{
	int digit_a, digit_b;

	for (digit_a = 0; digit_a <= 98; digit_a++)
	{
		for (digit_b = digit_a + 1; digit_b <= 99; digit_b++)
		{
			putchar((digit_a / 10) + '0');
			putchar((digit_a % 10) + '0');
			putchar(' ');
			putchar((digit_b / 10) + '0');
			putchar((digit_b % 10) + '0');

				if (digit_a != 98 || digit_b != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
