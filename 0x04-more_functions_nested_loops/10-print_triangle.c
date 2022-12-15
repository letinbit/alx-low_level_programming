/* Author is Neway Solomon */
#include "main.h"
/**
 * print_triangle - function that draw a triangle using #
 * @size: the size of the triangle
 * Return: do not return
 */
void print_triangle(int size)
{
	int i;
	int x;

	for (i = 1; i <= size; i++)
	{
		for (x = size; x >= 1; x--)
		{
			if (x > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
