#include "main.h"
/** print_alphabet - prints in lower case
 * Description: print alphabet
 *
 * Return: 0.  
 */                                                             
void print_alphabet(void)                                                                            
{                                                                                                    
	int ch, CH;
                                                                                                
	for (ch = 0; ch <= 10; ch++)
	{
		for (CH = 'a'; CH <= 'z'; CH++)
		{
		_putchar(CH);
		}
	}                                           
	_putchar('\n');                                                                              
      
