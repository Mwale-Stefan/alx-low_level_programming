#include <stdio.h>
/**
 *main - print all the letters except q and e
 *
 *Description: Using the main function
 *Print all the letters except q and e
 *Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}

