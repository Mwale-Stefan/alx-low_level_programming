#include "main.h"
/**
 * main - check the code
 *
 * Description: print alphabet
 * Return: 0.
 */
void print_alphabet(void);
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
