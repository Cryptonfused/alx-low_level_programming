#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int l, c = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');
	else if (n < 10)
		_putchar(n + '0');
	else
	{
		l = n;
		while (l / 10 > 0)
		{
			c *= 10;
			l /= 10;
		}

		while (c > 0)
		{
			_putchar((n / c) + '0');
			n %= c;
			c /= 10;
		}
	}
}
