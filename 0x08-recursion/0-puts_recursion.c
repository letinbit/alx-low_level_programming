/* Author is Neway */
#include "main.h"
/**
 * _puts_recursion - recursion function that print a string then new line
 * @s: the function parameter that will passed to be printed
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
