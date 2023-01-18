#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - program that prints the opcodes of its own main function
 * @a: pointer to the main function
 * @n: number of bytes to print
 *
 * Return: Nothing as the function is void type
 */
void print_opcodes(char *a, int n)
{
	int i = 0;

	/*for (i = 0; i < n; i++)*/
	while (i < n)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: integer
 * @argv: character
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int value;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, value);

	return (0);
}
