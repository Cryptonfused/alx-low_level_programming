#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful and 1 otherwise
 */
int main(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
		putchar('\n');
	return (0);
}
