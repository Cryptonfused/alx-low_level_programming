#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0;

	for (i = 0, j = 0; n1[i] || n2[i] || carry; i++, j++)
	{
		int sum = carry;

		if (n1[i])
			sum += n1[i] - '0';

		if (n2[i])
			sum += n2[i] - '0';

		carry = sum / 10;
		r[j] = (sum % 10) + '0';

		if (j >= size_r - 1 || (j == size_r - 2 && carry))
			return (0);
	}

	r[j] = '\0';

	return (r);
}
