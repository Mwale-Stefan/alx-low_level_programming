#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: is a parameter
 * return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++);

	return (len);
}
