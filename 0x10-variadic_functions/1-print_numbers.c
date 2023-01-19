/*Author is Neway */
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Variadic functions that prints its parameters
 * @separator: separator for each parameters
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = n; i > 0; i--)
	{
		if (*separator != '\0')
		{
			num = va_arg(ap, const unsigned int);
			printf("%d", num);
			if (i - 1 != 0)
				printf("%c", *separator);
		}
	}
	va_end(ap);
	printf("\n");
}
