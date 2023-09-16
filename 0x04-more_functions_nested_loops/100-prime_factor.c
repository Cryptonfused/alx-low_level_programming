#include <stdio.h>

/**
 * main - staring point of prog exec
 *
 * Return: 0 if successful otherwise :-(
 */
int main(void)
{
	long number = 612852475143;
	long factor = 2;

	while (number > factor)
	{
		if (number % factor == 0)
		{
			number = number / factor;
			factor = 2;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld\n", number);

	return (0);
}
