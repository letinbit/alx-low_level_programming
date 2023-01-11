#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int count;
	unsigned int sum = 0;
	unsigned int second_count;
	char *e;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			e = argv[count];
			for (second_count = 0; second_count < strlen(e); second_count++)
			{
				if (e[second_count] < 48 || e[second_count] > 57)
				{
					/*printf("Character\n");*/
					printf("Error\n");
					return (1);
				}
				/*printf("still number\n");*/
			}
			/*printf("Inner loop ends\n");*/
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
