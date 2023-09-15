#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the first 98 Fibonacci numbers
 * separated by a comma and a space, followed by a newline.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long long  first = 1, second = 2, next, i;

	printf("%llu, %llu", first, second);

	for (i = 2; i < 98; i++)
	{
		next = first + second;
		printf(", %llu", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
