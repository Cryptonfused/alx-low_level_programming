#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result buffer, or 0 if the result doesn't fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int start, len1 = strlen(n1), i, j, k = 0;
	int carry, len2 = strlen(n2), sum, d1, d2, end;
	char temp;

	if (size_r <= len1 || size_r <= len2)
		return (0); /* Result can't fit in the buffer */

	i = len1 - 1;
	j = len2 - 1;

	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		d1 = (i >= 0) ? n1[i] - '0' : 0;
		d2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = d1 + d2 + carry;

		carry = sum / 10;

		r[k] = (sum % 10) + '0';
		k++;

		i--;
		j--;
	}
	r[k] = '\0';
	end = k - 1;

	start = 0;
	while (start < end)
	{
		temp = r[start];

		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
