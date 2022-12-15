/* Author is Neway Solomon */
#include "main.h"

/**
 * more_numbers- function that print 0 to 14 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j, x, z;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				for (x = 1; x <= 2; x++)
				{
					if (x == 1)
						z = j / 10;
					else
						z = j % 10;
					_putchar(z + '0');
				}
			}
			else
				_putchar(j + '0');
		}
		_putchar('\n');
	}
}
