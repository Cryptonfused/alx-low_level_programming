#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two different digits
 *
 * Return: Always 0 means Success, otherwise :-(
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 56; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 != 56 || digit2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n'); /* Print a newline */
	return (0);
}
