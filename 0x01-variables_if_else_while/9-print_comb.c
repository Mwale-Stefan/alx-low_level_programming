#include <stdio.h>
/**
 * main - using the main function
 *
 * Description: all combinations of single-digit numbers
 *all possible combinations
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
