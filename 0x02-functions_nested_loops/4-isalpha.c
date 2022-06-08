#include "main.h"

/**
 * _isalpha - that checks for alphabetic character
 * @c: the value to be checked
 * Return: the correct output
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
