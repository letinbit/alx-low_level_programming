/* Author is Neway Solomon */
#include "main.h"

/**
 * print_alphabete function to print alphabete
 * Here I use a function called print_alphabet() which is defined to
 * print alphabet.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

}

