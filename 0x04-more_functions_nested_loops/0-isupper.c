/* Author is Neway Solomon*/
#include <ctype.h>
#include "main.h"

/**
 * _isupper - is a function to check weather the lettter is upper case or not
 * @c: character to be checked if ii is lower case
 * Return: 1 if upper case
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
