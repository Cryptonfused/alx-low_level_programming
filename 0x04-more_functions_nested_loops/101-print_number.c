#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		is_negative = 1;
	}

	int reversed_number = 0;

	while (n > 0)
	{
		reversed_number = reversed_number * 10 + n % 10;
		n /= 10;
	}

	if (reversed_number == 0)
	{
		_putchar('0');
	}
	else
	{
		while (reversed_number > 0)
		{
			_putchar((reversed_number % 10) + '0');
			reversed_number /= 10;
		}
	}

	if (is_negative)
	{
		_putchar('-');
	}
}

