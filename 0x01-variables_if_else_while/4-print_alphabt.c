#include <stdio.h>

/**
 * main - prints the alphabet in small letter,
 * followed by a new line, but noe q,e
 * Return: it will return 0 if it works 
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr != 'e' && chr != 'q')
		{
			putchar(chr);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
