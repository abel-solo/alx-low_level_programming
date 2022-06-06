#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 when runs succesfully
 */
int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
