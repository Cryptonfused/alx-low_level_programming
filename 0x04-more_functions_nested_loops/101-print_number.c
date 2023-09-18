#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int m = 1;
	unsigned int l = n;
	int b;

	if (n < 0)
	{
		_putchar('-');
		l = -l;
	}

	if (l == 0)
		_putchar('0');
	else if (l < 10)
		_putchar(l + '0');
	else
	{
		b = l;
		while (b / 10 > 0)
		{
			m *= 10;
			b /= 10;
		}

		while (m > 0)
		{
			_putchar(unsgined int (l / m) + '0');
			l %= m;
			m /= 10;
		}
	}
}
