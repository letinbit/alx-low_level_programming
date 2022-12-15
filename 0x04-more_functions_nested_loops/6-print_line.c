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

	for (i = 0; i <= n; i++)
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	_putchar('\n');
}
