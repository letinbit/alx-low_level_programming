/* Printing the figuers of base 10*/
#include <stdio.h>

/**
 * main-entry point
 * This code will prinnt numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decimal = 0;

	do {
		if (decimal / 2 == 5)
			break;
		putchar(decimal + '0');
		if (decimal != 9)
			putchar(',');
		decimal++;
	} while (decimal);
	printf("\n");
	return (0);
}
