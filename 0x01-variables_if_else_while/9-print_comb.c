#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful and 1 otherwise
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
