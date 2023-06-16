#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the function main here print last digits
 * consider last digit of n random number
 * print out a statement according to the value of last digit
 *
 * Return: always 0 if success
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/* code */
if (last_digit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else
{
	printf("Last digit of %d is %d ", n, last_digit);
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
