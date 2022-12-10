/* Autor Neway Solomon  */
/* Using putchar function to display integer greater than 10 */
#include <stdio.h>

/**
 * main-entry point
 * putchar() function can print int less than 10. so we need to use
 * division and modulo
 * to print int a = 23 putchar(a/10 + '0') putchar(a%10 + '0')
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstcomb;
	int secondcomb;

	for (firstcomb = 0; firstcomb <= 99; firstcomb++)
	{
		for (secondcomb = firstcomb + 1; secondcomb <= 99; secondcomb++)
		{
			putchar(firstcomb / 10 + '0');
			putchar(firstcomb % 10 + '0');
			putchar(' ');
			putchar(secondcomb / 10 + '0');
			putchar(secondcomb % 10 + '0');
			if (firstcomb == 98)
				if (secondcomb == 99)
					break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
