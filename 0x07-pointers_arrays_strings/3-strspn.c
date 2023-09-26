#include <string.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to match.
 *
 * Return: num of bytes in the initial seg of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int fnd = 0;

	while (*s)
	{
		fnd = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				c++;
				fnd = 1;
				break;
			}
			accept++;
		}
		if (!fnd)
			break;
		s++;
	}
	return (c);
}
