#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if successful and 1 otherwise
 */

int main(int argc, char *argv[])
{
	(void)argv; /* Ignore argv */
	printf("%d\n", argc - 1);
	return (0);
}
