/* Author is Neway */
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that multiplies two numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if Success
  */
int main(int argc, char *argv[])
{
	int num_1 = 0, num_2 = 0, mul;

	if (argc == 3)
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
