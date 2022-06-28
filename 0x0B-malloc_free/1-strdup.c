#include "main.h"
#include <stdlib.h>

/**
  * _strdup -copy a string to a newly allocated space in memory
  * @str: a string to be copyed
  * Return: pointer to be duplicated string or NULL if error exists
  */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
