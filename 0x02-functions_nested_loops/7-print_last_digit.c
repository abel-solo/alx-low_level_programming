#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be checked
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = x % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}

