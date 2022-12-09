/* Use putchar() function to print alphabets */
#include <stdio.h>

/**
 * main-entry point
 *
. * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 122;

	while (alph >= 97)
	{
		putchar(alph);
		alph--;
	}
	printf("\n");
	return (0);
}
