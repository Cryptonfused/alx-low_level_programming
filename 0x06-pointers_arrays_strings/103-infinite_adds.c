#include "main.h"

/**
 * rev_string - Reverse array (string)
 * @n: The string to be reversed.
 */
void rev_string(char *n)
{
    int i = 0;
    int j = 0;
    char temp;

    while (*(n + i) != '\0')
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)
    {
        temp = *(n + j);
        *(n + j) = *(n + i);
        *(n + i) = temp;
    }
}

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: Text representation of the first number to add.
 * @n2: Text representation of the second number to add.
 * @r: Pointer to the buffer to store the result.
 * @size_r: Buffer size.
 * Return: Pointer to the result or 0 if the result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int overflow = 0;
    int i = 0, j = 0, digits = 0;
    int val1, val2, temp_sum;

    while (*(n1 + i) != '\0')
    {
        i++;
    }
    while (*(n2 + j) != '\0')
    {
        j++;
    }
    i--;
    j--;

    if (j >= size_r || i >= size_r)
    {
        return (0);
    }

    while (j >= 0 || i >= 0 || overflow == 1)
    {
        if (i < 0)
        {
            val1 = 0;
        }
        else
        {
            val1 = *(n1 + i) - '0';
        }

        if (j < 0)
        {
            val2 = 0;
        }
        else
        {
            val2 = *(n2 + j) - '0';
        }

        temp_sum = val1 + val2 + overflow;

        if (temp_sum >= 10)
        {
            overflow = 1;
        }
        else
        {
            overflow = 0;
        }

        if (digits >= (size_r - 1))
        {
            return (0);
        }

        *(r + digits) = (temp_sum % 10) + '0';
        digits++;
        j--;
        i--;
    }

    if (digits == size_r)
    {
        return (0);
    }

    *(r + digits) = '\0';
    rev_string(r);
    return (r);
}
