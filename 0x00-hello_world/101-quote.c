/*Author: Neway Solomon */
#include <stdio.h>

/**
 * main-Entry point
 * This code will print a combination of letters
 * numbers and special characters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char phrase_1[32] = "and that piece of art is useful";
	char phrase_2[26] = " - Dora Korpar, 2015-10-19";

	for (i = 0; i < 32; i++)
		putchar(phrase_1[i]);
	putchar('"');
	for (j = 0; j < 27; j++)
		putchar(phrase_2[j]);
	putchar('\n');
	return (1);
}
