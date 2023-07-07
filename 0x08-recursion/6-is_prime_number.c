#include "main.h"
/**
 * multiplier - find multipliers
 * @n: multipl 1
 * @i: multipl 2
 *
 * Return: 1 if prime, 0 if not
 */
int multiplier(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (multiplier(n, i + 1));
	}
}
/**
 * is_prime_number - check if number is prime or not
 * @n: number to check
 *
 * Return: 1 if yes or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (multiplier(n, 2));
	}
}
