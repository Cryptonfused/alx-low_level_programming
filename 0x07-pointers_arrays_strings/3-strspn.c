#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: string containing accepted characters
 * Return: number of bytes in the initial segment of s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		s++;
	}

	return count;
}
