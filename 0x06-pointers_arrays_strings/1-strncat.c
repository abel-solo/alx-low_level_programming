#include "main.h"

/*
 * _strncat - concatinates two strings
 * @dest: the destination
 * @src: the source
 * @n: the amount of bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
