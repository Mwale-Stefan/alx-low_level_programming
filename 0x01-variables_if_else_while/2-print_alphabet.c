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
	for(int ch = 'A'; ch <= 'z'; ch++)
	{
	ch = tolower(ch);
	putchar(ch);
		}
	putchar('\n');
	return 0;
}
