#include "main.h"
/**
 * *_strcat - concatinating str
 * @dest: pointer
 * @src: pointer
 * Return: the new dest dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	int j;

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
