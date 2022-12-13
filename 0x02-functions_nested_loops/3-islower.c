/* Author is Neway Solomon*/
#include <ctype.h>
#include "main.h"

/**
 * _islower - is a function to check weather the lettter is lower case or not
 * @c: character to be chceched if is is lower case
 * Return: 1 if lower case
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
