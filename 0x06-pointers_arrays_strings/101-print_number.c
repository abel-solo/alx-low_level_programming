#include "main.h"

/**
 * print_number -  prints an integer
 * @n: the integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	int d = 1;
	int i, r;

if (n < 0)
{
	_putchar('-');
	n *= -1;
}

for (i = 0; n / d > 9; i++, d *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);

}

}
