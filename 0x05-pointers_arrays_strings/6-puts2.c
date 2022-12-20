/*Author is Neway*/
#include "main.h"

/**
 * puts2 - Function that print every other character of a string
 * @str: parameter passed to print
 * Returrn: Nothing
 */
void puts2(char *str)
{
	int i = 0;
	int size = 0;

	while (str[i] != '\0')
	{
		i++;
		size = i - 1;
	}
	for (i = 0; i <= size; i++)
	{
		if(str[i] == '\0')
			break;
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

