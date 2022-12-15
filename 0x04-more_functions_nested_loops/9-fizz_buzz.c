/* Author is Neway Solomon */
#include <stdio.h>

/**
 * main - entry point
 * this program prints 1 to 100 and Fizz insteade of multiples of 3
 * Buzz instead of multiples of 5
 * FizzBuzz instead of multiples of both 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char Fizz[5] = "Fizz";
	char Buzz[5] = "Buzz";
	char FizzBuzz[9] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", FizzBuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s", Fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s", Buzz);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
