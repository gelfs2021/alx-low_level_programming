#include <stdio.h>

/**
 * main - prints the small letter of the alphabet,
 * followed by a new line
 * Return: it will return 0 if it works correctly
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
