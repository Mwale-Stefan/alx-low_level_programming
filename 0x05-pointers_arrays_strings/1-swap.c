#include "main.h"

/**
 * swap_int - swaps integers
 * @a: is a paraemeter
 * @b: is a parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int a, b;

	a ^= b;
	b ^= a;
	a ^= b;
}
