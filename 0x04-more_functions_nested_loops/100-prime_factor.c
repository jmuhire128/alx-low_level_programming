#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor number
 *
 * Return: 0 if success
 */

int main(void)
{
	long n, maxk;
	long number = 612852475143;
	double square = sqrt(number);

	for (n = 1; n <= square; n++)
	{
		if (number % n == 0)
		{
			maxk = number / n;
		}
	}
	printf("%ld", maxk);

	return (0);
}
