#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers range from 0 to 99 and are separated by a space.
 * Combinations are separated by a comma and space.
 *
 * Return: 0 means successful otherwise :-(
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
