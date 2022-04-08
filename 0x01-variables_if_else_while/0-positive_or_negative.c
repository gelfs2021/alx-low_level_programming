#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - it assign a random number to the variable
 * and it excute and print it
 * Return: will return 0 it it works  Successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
