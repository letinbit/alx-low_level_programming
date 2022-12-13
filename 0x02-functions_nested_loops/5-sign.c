/*Author is Neway Solomon*/
#include <ctype.h>
#include "main.h"

/**
 * print_sign - is letting the sign of a number
 * @n: holds the number to be checked its sign
 * Return: 1 if n is greater than zero
 * 0 if nis zero or -1 if n is lessthan zero
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
