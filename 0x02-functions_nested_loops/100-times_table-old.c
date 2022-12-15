/* Author is Neway Solomon */
#include "main.h"

/**
 * print_times_table - is a function that print time table
 * @n: is an argument that deternime the size of time table
 * Recturn: this function do not return any value
 */
void print_times_table(int n)
{/* function open*/
	void print(int, int, int, int);
	int row, column, result;

	if (n <= 15)
	{
		if (n >= 0)
		{
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
					print_c_s(row, column, result, n);
				}
				_putchar('\n');
			}
		}
	}
}
