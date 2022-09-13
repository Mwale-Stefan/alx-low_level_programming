#include "main.h"
/**
 * print_alphabet - prints in lower case
 *
 * Description: print alphabet
 * Return: 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
