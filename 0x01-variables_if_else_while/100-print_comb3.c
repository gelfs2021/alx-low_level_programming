#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: it will return 0 if it works
 */
int main(void)
{
	int g, r;

	g = 48;
	r = 48;

	while (r < 58)
	{
		g = 48;
		while (g < 58)
		{
			if (r != g && r < g)
			{
				putchar(r);
				putchar(g);
				if (g == 57 && r == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			g++;
		}
		r++;
	}
	putchar('\n');
	return (0);
}
