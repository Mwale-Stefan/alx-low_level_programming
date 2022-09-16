#include "main.h"

/**
 * int _isupper(int c) - checks for uppercase character
 * @c: character to be tested
 * Return: 1 or 0 depending on condition
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
