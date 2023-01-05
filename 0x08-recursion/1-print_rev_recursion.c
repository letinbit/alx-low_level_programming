/*Author is Neway*/
#include "main.h"

/**
 * _print_rev_recursion - Recursion function that print string in reverse order
 * @s: printed string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
