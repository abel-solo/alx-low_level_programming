#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, followed by a new line
 * Return:0 when runs succesfully;
 */
int main(void);
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchars(x);
		}
		x++;
	}
	putchars('\n');
	return (0);
}