#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: the destination
 * @src: the source
 * @n: the amount of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
