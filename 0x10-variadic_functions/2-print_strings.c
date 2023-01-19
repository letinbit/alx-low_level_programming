/*Author is Neway */
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Variadic functions that prints its parameters
 * @separator: separator for each parameters
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *text, *delimiter;

	if (separator == NULL || *separator == 0)
		delimiter = "";
	else
		delimiter = (char *) separator;
	va_start(ap, n);
	for (i = n; i > 0; i--)
	{
		text = va_arg(ap, char *);
		if (text == NULL)
			text = "nil";
		printf("%s", text);
		if (i - 1 != 0)
			printf("%s", delimiter);
	}
	printf("\n");
	va_end(ap);
}
