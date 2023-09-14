#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long int a = 1, b = 2, next;

	printf("%llu, %llu", a, b);

	for (int i = 2; i < 98; i++)
	{
		next = a + b;
		printf(", %llu", next);

		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}

