/* Author is Neway Solomon */
#include "main.h"
/**
 * print_square - function that draw a square using #
 * @n: the size of the square
 * Return: do not return
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
