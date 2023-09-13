#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long prev = 0, curr = 1, next;

	for (count = 0; count < 50; count++)
	{
		next = prev + curr;
		printf("%lu", next);

		prev = curr;
		curr = next;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
