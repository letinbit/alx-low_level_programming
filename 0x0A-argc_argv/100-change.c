#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: passed parameter
 * @argv: will be calculated
 * Return: 0 if sucess
 */

int main(int argc, char **argv)
{
	int all_amount = 0;
	int change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
		all_amount++;
	}
	printf("%d\n", all_amount);
	return (0);
}
