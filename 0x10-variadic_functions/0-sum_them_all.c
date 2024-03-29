/*Author for this code is Neway*/
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Variadic functions that sum all its arguments
 * @n: argument
 *
 * Return: the sum of the arguments, 0 if the first arument is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = n; i > 0; i--)
	{
		sum = sum + va_arg(ap, const unsigned int);
	}
	va_end(ap);

	return (sum);
}
