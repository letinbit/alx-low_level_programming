/* print every seconds in a day*/
#include "main.h"

/**
 * jack_bauer - function that print every second
 * Using nested two loops * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int outer;
	int inner;

	for (outer = 0; outer < 24; outer++)
	{
		for (inner = 0; inner <= 59; inner++)
		{
			_putchar(outer / 10 + '0');
			_putchar(outer % 10 + '0');
			_putchar(':');
			_putchar(inner / 10 + '0');
			_putchar(inner % 10 + '0');
			_putchar('\n');
		}
	}
}
