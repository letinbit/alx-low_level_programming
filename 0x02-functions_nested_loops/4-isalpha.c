/* Author is Neway Solomon*/
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - is a function to check weather the lettter is lower case or not
 * @c: character to be chceched if is is lower case
 * Return: 1 if lower case
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
