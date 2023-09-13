#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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

