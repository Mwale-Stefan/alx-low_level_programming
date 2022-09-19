#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: is a string
 * Return; reversed string
 */

void rev_string(char *s)
{
	gets(s);
	strrev(s);
	putchar(s);
}
