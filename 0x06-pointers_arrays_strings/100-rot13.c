#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char *alpha;

			if (c >= 'a' && c <= 'z')
				alpha = lowercase;
			else
				alpha = uppercase;

			for (j = 0; alpha[j] != '\0'; j++)
			{
				if (c == alpha[j])
				{
					int shift = (j + 13) % 26;

					if (c >= 'a' && c <= 'z')
						str[i] = lowercase[shift];
					else
						str[i] = uppercase[shift];

					break;
				}
			}
		}
	}

	return (str);
}
