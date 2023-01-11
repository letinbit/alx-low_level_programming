/* Author is Neway */
#include <stdio.h>

/**
  * main - function that prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
