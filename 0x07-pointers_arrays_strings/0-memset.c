#include "main.h"

/**
 * _memset - fills a memory set with a constant byte
 * @s: address of the memory block
 * @b: char to be used
 *@n: number of bytes
 *Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
