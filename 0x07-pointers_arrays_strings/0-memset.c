#include "main.h"
/**
 * _memset - fills  memory with constant byte
 * @s: pointer to memory area to be filled
 * @b: the constant byte used to fill memory
 * @n: number of bytes of memory area
 *
 * Return: s pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
