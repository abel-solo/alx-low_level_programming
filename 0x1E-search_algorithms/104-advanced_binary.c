#include "search_algos.h"

/**
 * binary_rec - searches for a value in a sorted array
 * @array: pointer of given array
 * @left: size_t element located at right side of the array
 * @right: size_t element located at right side of the array
 * @value: value to be searched
 * Return: Value, or -1 if value not present
 */

int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");

	i = left;
	while (i < right)
	{
		printf("%d,", array[i]);
		++i;
	}
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_rec(array, left, i - 1, value));
	return (binary_rec(array, i + 1, right, value));
}
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer of given array
 * @size: size of elements in the array
 * @value: value to be searched
 * Return: Value, or -1 if value not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
