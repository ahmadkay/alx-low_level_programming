#include "main.h"
#include <stdio.h>

/**
 * print_sign - Check the code
 * @n: An input interfer
 * Description: function uses _putchar function to print
 * Return: 1 if n is > 0, return 0 if n = 0 and return -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
