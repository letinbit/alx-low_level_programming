/* Author is Neway Solomon */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - entry point
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	double trunc(double);

	int count;
	unsigned long int Toint;
	double first = 0;
	double second = 1;
	double third = first + second;

	for (count = 3; count < 101; count++)
	{
		Toint = (unsigned long) third;

		if (count == 100)
			printf("%ld\n", Toint);
		else
			printf("%ld, ", Toint);
		first = second;
		second = third;
		third = first + second;
	}
	return (0);
}
