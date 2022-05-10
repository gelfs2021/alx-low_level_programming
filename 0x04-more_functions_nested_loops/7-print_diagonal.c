#include "main.h"

/**
 * print_diagonal - prits digonal of backslash
 * @n: is number of backslash
 *
 *
 * Return: digonal
 */
void print_diagonal(int n)
{
	int i, j;

	for (; i < n; i++)
{
	for (; j < i; j++)
{
	_putchar(32);
}
	_putchar(92);
}
}
