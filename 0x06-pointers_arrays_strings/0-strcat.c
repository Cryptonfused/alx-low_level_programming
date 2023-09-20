#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}

	dest[l] = '\0';

	return (dest);
}
