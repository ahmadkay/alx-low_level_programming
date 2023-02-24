#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Check description
 * Description : it prints the alphabet in lower case followed by a new line
 * Return : Nothing.
 */


void print_alphabet(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
