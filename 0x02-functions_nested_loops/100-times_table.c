/* Author is Neway Solomon */
#include "main.h"
 /**
  * print_times_table - is a function that print time table
  * print_c_s - is a function used to print both "," and " "
  * @n: is an argument that deternime the size of time table
  * Recturn: this function do not return any value
  * print_c_s - is a function used to print both "," and " "
  * @x: row variable used at first (outer) loop
  * @y: column variable used at second (inner) loop
  * @r: result= row + column
  * @n: size of the time table
  * Recturn: this function do not return any value
  */
void print_c_s(int x, int y, int r, int n)/* function top print , and space*/
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
void print_times_table(int n)/* function that call print_c_s */
{/* function open*/
	/*calling print_c_s()*/
	void print_c_s(int, int, int, int);
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
