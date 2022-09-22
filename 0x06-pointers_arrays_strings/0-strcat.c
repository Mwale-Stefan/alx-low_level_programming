#include "main.h"
#include <stdio.h>
/**
 *_strcat -  concatenates two strings
 *@dest: is the destination
 *@src: is the source
 *Return - pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char str3;

	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}
	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}
	putchar(str3);
	return (0);
}
