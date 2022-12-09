/* Use putchar() function to print alphabets */
#include <stdio.h>

/**
 * main-entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		if (alph == 101)
			alph++;
		else if (alph == 113)
			alph++;
		else
		{
			putchar(alph);
			alph++;
		}
	}
	printf("\n");
	return (0);
}
