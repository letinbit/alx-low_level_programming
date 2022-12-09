/* Printing the figuers of base 10*/
#include <stdio.h>

/**
 * main-entry point
 * This code will prinnt numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int outer;
	int inner;

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = outer + 1; inner <= 9; inner++)
		{
			putchar(outer + '0');
			putchar(inner + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
