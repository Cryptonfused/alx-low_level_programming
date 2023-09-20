#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to concatenate.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		l++;
		i++;
	}

	dest[l] = '\0';

	return (dest);
}
