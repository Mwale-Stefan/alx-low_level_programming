#include <stdio.h>
#include <ctype.h>
/**
 * main- prints the alphabet in lowercase
 *
 * Description: using the main function
 * This program prints prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;
	for(ch = 'a' ; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return 0;
}
