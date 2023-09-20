#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		     str[i - 1] == '\n' || str[i - 1] == ',' ||
		     str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' ||
		     str[i - 1] == '"' || str[i - 1] == '(' ||
		     str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32; /* Convert to uppercase by subtracting 32 */
		}
	}

	return (str);
}
