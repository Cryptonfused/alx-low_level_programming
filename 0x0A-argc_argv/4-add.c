#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers and prints the result.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '-')
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		if (num < 0 || (num == 0 && *argv[i] != '0'))
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
