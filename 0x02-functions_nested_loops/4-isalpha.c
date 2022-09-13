#include "main.h"
/**
 * int_isalpha - checks for alphabetic character.
 *
 * @c: is a character argument
 * Return: 1 or 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'b') || ( c >= 'A' && c <= 'Z'));
}	
