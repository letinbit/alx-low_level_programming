/* Author is Neway Solomon */
#include "main.h"

/**
 * times_table - is a function that print time table
 * Recturn: this function do not return any value
 */
void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;

			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(result + '0');
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
