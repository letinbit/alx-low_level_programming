/* Author is Neway Solomon */
#include "main.h"

/**
 * print_times_table - is a function that print time table
 * @n: is an argument that deternime the size of time table
 * Recturn: this function do not return any value
 */
void print_times_table(int n)
{/* function open*/
	int row, column, result;

	if (n < 15 && n > 0)
	{/*outer if open*/
		for (row = 0; row <= n; row++)
		{/*outer for open*/
			for (column = 0; column <= n; column++)
			{/*inner for open*/
				result = row * column;

				if (result > 99)
				{
					_putchar((result / 10) / 10 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 9)
				{
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else
					_putchar(result + '0');
				if (column != n)
				{
					if (result + row <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (result + row <= 99)
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
		_putchar('\n');
		}
	}
}
