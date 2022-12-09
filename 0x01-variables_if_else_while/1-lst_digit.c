#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-entry point
 * betty style doc for function main goes there
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int sign;

	if (n < 0)
		sign = n * -1;
	else
		sign = n;

	int new;

	new = sign / 10;
	new *= 10;
	new = sign - new;

	printf("Last digit of %d is %d ", n, new);
	if (new > 5)
		printf("and is greater than 5\n");
	else if (new == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
