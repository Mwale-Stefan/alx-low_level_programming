#include "main.h"

/**
 * int _isupper(int c) - checks for uppercase character
 * Return: 1 or 0 depending on condition
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
