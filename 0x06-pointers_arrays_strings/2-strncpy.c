#include <stdio.h>

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
