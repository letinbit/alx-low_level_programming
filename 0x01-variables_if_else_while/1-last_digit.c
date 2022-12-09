#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here */

/**
 * main-entry point
 * betty style doc for funtion main goes there
 * Return: lways 0 (Success)
 */
int main(void)
{
	int n;
	int new;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	new = n / 10;
	new *= 10;
	new = n - new;

	printf("Last digit of %d is %d ", n, new);
	if (new > 5)
		printf("and is greater than 5\n");
	else if (new == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
