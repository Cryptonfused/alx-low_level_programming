#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments passed to it
 * @argc: No. of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if suceessful, else return 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
