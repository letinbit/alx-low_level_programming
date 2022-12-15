/* Author is Neway Solomon */
#include "main.h"

/**
 * print_numbers - function to print 0 to 9, followed by newline
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
