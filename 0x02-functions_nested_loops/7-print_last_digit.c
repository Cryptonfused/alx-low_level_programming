#include "main.h"
/**
 * print_last_digit - Prints the last digit of a num.
 * @n: The int var to store num entered for extraction
 * of last digit.
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
