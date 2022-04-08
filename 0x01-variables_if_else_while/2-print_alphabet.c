#include <stdio.h>

/**
 * main - prints the small letter of the alphabet,
 * followed by a new line
 * Return: it will return 0 if it works correctly
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
