#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued Fibonacci terms
 *        that do not exceed 4 million, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmr;
	unsigned long int ctrm = 1, ntrm = 2, sum = 0;

	for (tmr = 1; tmr <= 33; ++tmr)
	{
		if (ctrm < 4000000 && ctrm % 2 == 0)
			sum = sum + ctrm;

		ntrm = ctrm + ntrm;
		ctrm = ntrm - ctrm;
	}

	printf("%lu\n", sum);

	return (0);
}
