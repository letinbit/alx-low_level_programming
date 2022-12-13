/* Author is Neway Solomon */
#include "main.h"

/**
 * print_alphabet - function to print alphabet
 * Here I use a function called print_alphabet() which is defined to
 * print alphabet using a function _putchar()
 *
 * Return: Do not have return value
 */
void print_alphabet(void)/*not take any arument and do not return*/
{
	char i = 'a';

	for (; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

}

