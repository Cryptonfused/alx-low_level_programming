#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string containing accepted characters
 * Return: number of bytes in the initial segment of s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int fnd = 0;
	char *a;

	while (*s)
	{
		fnd = 0;
		for (*a = accept; *a; a++)
		{
			if (*s == *a)
			{
				c++;
				fnd = 1;
				break;
			}
		}
		if (!fnd)
		{
			break;
		}
		s++;
	}

	return (c);
}
