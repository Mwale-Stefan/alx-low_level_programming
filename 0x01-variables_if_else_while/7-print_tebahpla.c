#include <stdio.h>
/**
 * main - using the main function
 *
 * Description: print alphabet in reverse
 * Prints reverse alphabet plus a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
