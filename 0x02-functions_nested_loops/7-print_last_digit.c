#include "main.h"
/**
 *print_last_digit -  prints thhe last digit of a number
 *
 * @n: the passed argument
 * Return: the last figit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	
	_putchar(last_digit + '0');
	return (last digit);
}