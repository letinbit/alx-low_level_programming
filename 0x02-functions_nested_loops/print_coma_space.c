/*Author is Neway Solomon*/
#include "main.h"

/**
 * print_c_s - is a function used to print both "," and " "
 * @x: row variable used at first (outer) loop
 * @y: column variable used at second (inner) loop
 * @r: result= row + column
 * @n: size of the time table
 *Return: No return
 */
void print_c_s(int x, int y, int r, int n)
{
	if (y != n)/* if (column != n)*/
	{
		if (r + x <= 9)/* if (result + row <= 9)*/
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		else if (r + x <= 99)/* if (result + row <= 99)*/
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
