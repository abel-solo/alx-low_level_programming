#include "main.h"
#include <stdlib.h>

/**
  * _strdup -copy a string to a newly allocated space in memory
  * @str: a string to be copyed
  * Return: pointer to be duplicated string or NULL if error exists
  */

char *_strdup(char *str)
{
	unsigned int i = 0;	
	unsigned int j = 0;

	char *s;

	if (str == NULL)
		return (NULL);
	while (str[j])
		j++;
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);

	while ((s[i] = str[i]) != '\0')
		i++;
	return (s);

}
