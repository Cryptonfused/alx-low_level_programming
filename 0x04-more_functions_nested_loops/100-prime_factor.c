#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > factor)
	{
		if (n % factor == 0)
		{
			n = n / factor;
			factor = 2;
		}
		else
		{
			factor++;
		}
	}

	return (n);
}
