/* Author is Neway */
#include <stdio.h>

/**
 * main - Entry point
 * This program can find and print the largest prim factor of a nmber
 * Return: always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	int last_pf, pf = 2;

	while (number != 1)
	{
		if (number % pf == 0)
		{
			while (number % pf == 0)
			{
				last_pf = pf;
				number /= pf;
			}
		}
		pf++;
	}
	printf("%d\n", last_pf);
	return (0);
}
