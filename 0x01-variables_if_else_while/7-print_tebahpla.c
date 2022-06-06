#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 * Resturn:0 when runs succesfully
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
