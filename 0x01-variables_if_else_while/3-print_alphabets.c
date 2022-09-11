#include <stdio.h>
#include <ctype.h>

/**
 * Main- prints the alphabet in lowercase, and then in uppercase
 *
 * Description:Using the main function
 * This proram prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *Return: 0
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return(0);
}
