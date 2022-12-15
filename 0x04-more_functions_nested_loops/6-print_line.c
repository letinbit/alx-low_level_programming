/* Author is Neway Solomon */
#include "main.h"

/**
 * print_line - function to print '_' n times
 * @n: n determine the number of '_' to make a line
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
