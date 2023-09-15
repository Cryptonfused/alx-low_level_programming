#include <stdio.h>

/**
 * multiply - Multiplies two matrices
 * @F: First matrix
 * @M: Second matrix
 */
void multiply(int F[2][2], int M[2][2])
{
	int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

/**
 * power - Raises matrix F to power n
 * @F: Matrix to be raised
 * @n: Exponent
 */
void power(int F[2][2], int n)
{
	if (n <= 1)
		return;

	int M[2][2] = {{1, 1}, {1, 0}};
	power(F, n / 2);
	multiply(F, F);

	if (n % 2 != 0)
		multiply(F, M);
}

/**
 * fib - Calculates Fibonacci number at position n
 * @n: Position
 * Return: Fibonacci number
 */
int fib(int n)
{
	if (n <= 0)
		return 0;

	int F[2][2] = {{1, 1}, {1, 0}};
	power(F, n - 1);

	return F[0][0];
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98;

	for (int i = 0; i < n; i++)
	{
		printf("%d", fib(i + 1));
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
	return (0);
}
