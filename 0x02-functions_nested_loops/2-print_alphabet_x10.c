/* Author is Neway Solomon */
#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times
 * Here I use a function called print_alphabete_x10() which is defined to
 * print alphabet using a function _putchar() 10 times
 *
 * Return: Do not have return value
 */
void print_alphabet_x10(void)/*not take any arument and do not return*/
{
	char i;
	int count = 1;

	for (; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}

