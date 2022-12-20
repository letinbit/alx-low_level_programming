#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 *
 * Return: Do not return any thing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
