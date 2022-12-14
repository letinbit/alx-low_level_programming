/*Authorvis Neway Solomon*/
#include <stdio.h>

/**
 * main - entry point
 * this program is able to summ all multiples of 3 or 5 uptu 1024
 * Return: 0 is seccess
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("Summation:multiples of 3 or 5:less than 1024 is %d\n", sum);
	return (0);
}
