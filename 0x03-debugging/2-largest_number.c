#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int tmp;

	if (a > b)
	{
		tmp = a;
	}
	else
	{
		tmp = b;
	}
	if (tmp > c)
	{
		largest = tmp;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
