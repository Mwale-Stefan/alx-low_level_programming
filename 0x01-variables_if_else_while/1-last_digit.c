#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- print Last digit of followed by n
 *
 * Description: using the main function
 * This program prints "print Last digit of followed by n"
 * Return:0
 */
int main(void)
{
	int n, lsn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lsn = n % 10;

	if (lsn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsn);
	}
	else if (lsn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsn);
	}
	else if (lsn < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsn);
	}
		return (0);
}
