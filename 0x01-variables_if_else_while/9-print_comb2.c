#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 if successful and 1 otherwise
 */
int main(void)
{
	int n, i;
	char arr[2] = ", ";

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		for (i =  0; i <= 1; i++)
			putchar(arr[i]);
	}
	putchar(n);
	putchar('\n');
	return (0);
}
