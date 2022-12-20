/*Author is Neway*/
#include "main.h"

/**
 * puts_half - Function that print half of a string
 * @str: parameter passed to print half of it
 * Returrn: Nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int size = 0;
	int half;

	while (str[i] != '\0')
	{
		i++;
		size = i - 1;
	}
	half = size / 2;
	for (i = half + 1; i <= size; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}

