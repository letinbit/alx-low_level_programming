/* Author is Neway Solomon */
#include <stdio.h>

/**
 * main - entry point
 * This program prints the sum of fibonancii even number upto 4000000
 * Return: Always 0 (success)
 */
int main(void)
{
	long int sum = 0;
	long int first = 0;
	long int second = 1;
	long int third = first + second;

	while (third < 4000000)
	{
		if (third % 2 == 0)
			sum = sum + third;
		first = second;
		second = third;
		third = first + second;
	}
	printf("%ld\n", sum);
	return (0);
}
