#include "main.h"
/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 * Return: Do not return any thing
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
