#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The int to store value entered for last digit extraction
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	_putchar(l + '0');
	return (l);

}
