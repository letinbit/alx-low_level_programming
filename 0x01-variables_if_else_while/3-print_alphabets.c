/* alphABET*/
#include <stdio.h>

/**
 * main-entry point
 * Print both lower and upper case alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower = 97;
	int upper = 65;

	for (; lower <= 122; lower++)
		putchar(lower);
	for (; upper <= 90; upper++)
		putchar(upper);
	printf("\n");
	return (0);
}
