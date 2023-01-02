/* Author is Neway Solomon */
#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - function that print two diagonals of two dimentional array
 * @a: pointer
 * @size: size of an arry
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tmpsize;
	unsigned int bkdiagonal, frdiagonal;

	tmpsize = 0;
	bkdiagonal = 0;
	frdiagonal = 0;

	tmpsize = (size * size) - 1;
	for (i = 0; i <= tmpsize; i = i + (size + 1))
	{
		bkdiagonal = bkdiagonal + a[i];
	}
	for (i = (size - 1); i < tmpsize; i = i + (size - 1))
	{
		frdiagonal = frdiagonal + a[i];
	}
	printf("%d, %d\n", bkdiagonal, frdiagonal);
}
