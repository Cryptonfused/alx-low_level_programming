#include <unistd.h>
/**
 * main - entry point of code
 * write - prints content to be displayed
 *
 * Return: 1 if all goes well and 0 otherwise.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
