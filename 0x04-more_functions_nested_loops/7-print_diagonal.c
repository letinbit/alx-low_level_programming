/* Author is Neway Solomon */
#include "main.h"

/**
 * print_diagonal - function that draw a diagonal line
 * @n: number of '\' to make a diagonal line
 * Return: do not return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
