#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - Check if a string contains only digits.
 * @str: The input string.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count;
	unsigned int length = strlen(str);

	count = 0;
	while (count < length)
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}
/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
