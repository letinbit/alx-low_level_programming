/* Author is Neway Solomon */
#include <stdio.h>

/**
 * print_to_98 - is a function that print natural number upti 98
 * @start: passed parameter to list natural number starting from it
 * Return: Do not return any thing
 */
void print_to_98(int start)
{
	int x;

	if (start == 98)
		printf("%d", start);
	else if (start < 98)
	{
		for (x = start; x <= 98; x++)
			if (x == 98)
				printf("%d", x);
			else
				printf("%d, ", x);
	}
	else
	{
		for (x = start; x >= 98; x--)
			if (x == 98)
				printf("%d", x);
			else
				printf("%d, ", x);
	}
	printf("\n");
}

