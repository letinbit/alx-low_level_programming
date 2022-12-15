/* Author is Neway Solomon */
#include <stdio.h>

/**
 * main - entry point
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (success)
 */
int main(void)
{
	int count;
	long int first = 0;
	long int second = 1;
	long int third = first + second;

	for (count = 3; count < 53; count++)
	{
		if (count == 50)
			printf("%ld\n", third);
		else
			printf("%ld, ", third);
		first = second;
		second = third;
		third = first + second;
	}
	return (0);
}
