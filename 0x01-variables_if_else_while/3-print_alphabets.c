#include <stdio.h>

/**
 * main - prints the alphabet in small letter, and then in capital,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	for (ch = 'A'; chr <= 'Z'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
