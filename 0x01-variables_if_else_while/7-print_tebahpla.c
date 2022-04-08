#include <stdio.h>

/**
 * main - prints the revers and the lower case,
 * followed by a new line
 * Return: it will return 0 if it works correctly
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
