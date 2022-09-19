#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string parameter
 * Return: string with every other character
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(input); i += 2)
	{
		putchar(input[i]);
	}
}
