/* Author is Neway Solomon*/
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - is a function to check weather the charater is digit or not
 * @c: character to be checked if it is a digit
 * Return: 1 if it is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
