#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory using malloc
  * @b: memory to allocatr
  * Return: pointer to allocated memory or normal process termination if error
  */

void *mallc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
