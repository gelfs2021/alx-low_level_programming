#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer to string
 * @c: constant char
 * @a: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = c;
		a++;
	}
	return (s);
}
