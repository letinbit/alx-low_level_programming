/* Author is Neway Solomon */
#include "main.h"

/**
 * print_number- function that print a passed number as a parameter
 * to print more than one digits / and % will be used
 * @n: the number that will be printer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n > 999)
	{
		_putchar((((n / 10) / 10) / 10) + '0');
		_putchar((((n / 10) / 10) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 99)
	{
		_putchar((((n / 10) / 10) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
}
