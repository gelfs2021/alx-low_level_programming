#include "main.h"
/**
* print_square - prints square
*@size: the size of the square
*
*
*Return:  it will return the square
**/

void print_square(int size)
{
int i, j;

if (size == 0)
{
putchar ('\n');
}
else
{
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
{
		putchar(35);
}
	putchar('\n');
}
}
}

