/*Author is Neway Solomon*/
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - is a function that return the last gigit of given number
 * @num: it is a parameter will be passed to return its last digit
 *
 * Return: lat digit of the passed parameter
 */
int print_last_digit(int num)
{
	int last = abs(num) % 10;

	_putchar(last + '0');
	return (last);
}
