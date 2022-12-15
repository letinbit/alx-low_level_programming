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
	double first = 0;
	double second = 1;
	double third = first + second;
	
	for (count = 3; count < 101; count++)
	{
		if (count == 100)
			printf("%g\n", third);
		else
			printf("%g, ", third);
		first = second;
		second = third;
		third = first + second;
	}
	return (0);
}
