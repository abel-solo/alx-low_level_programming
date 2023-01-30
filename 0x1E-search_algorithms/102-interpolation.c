#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * of integer iterating using interpolation bn gaps of index
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, h;

	if (!array)
		return (-1);
	for (l = 0, h = size - 1; h >= l;)
	{
		i = l + (((double)(h - l) / (array[h] - array[l])) *
			   (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			h = i - 1;
		}
		else
		{
			l = i + 1;
		}
	}
	return (-1);
}
