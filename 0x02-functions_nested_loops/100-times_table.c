#include "main.h"

/**
 * print_times_table - Prints the n times table, starting from 0
 *does not print for n less than 0 or greater than 15
 * @n: the number to print
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				k = j * i;

				if (j == 0)
				{
					_putchar('0' + k);
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (k < 10)
					{
						_putchar(' ');
						_putchar('0' + k);
					}
					else
					{
						_putchar('0' + (k / 10));
						_putchar('0' + (k % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
