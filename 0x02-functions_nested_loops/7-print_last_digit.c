#include "main.h"
/**
 *print_last_digit -  prints thhe last digit of a number
 *
 * @n: the passed argument
 * Return: the last figit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
