#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int sum, carry = 0;
	int i, j;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	r[size_r--] = '\0';
	len1--;
	len2--;

	for (i = size_r, j = 0; i >= 0; i--, j++)
	{
		sum = carry;
		if (j <= len1)
			sum += n1[len1 - j] - '0';
		if (j <= len2)
			sum += n2[len2 - j] - '0';

		r[i] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry == 1)
	{
		if (size_r == len1 + 2 || size_r == len2 + 2)
			return (0);

		r[size_r - len1 - 2] = '1';
		r[0] = '1';
	}
	else if (carry == 0)
	{
		for (i = 0; r[i]; i++)
			r[i] = r[i + 1];
	}

	return (r);
}
