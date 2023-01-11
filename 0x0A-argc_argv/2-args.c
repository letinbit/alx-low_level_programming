/* Author is Neway */
#include <stdio.h>

/**
 * main - function that prints all arguments it receives
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if success
  */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}

