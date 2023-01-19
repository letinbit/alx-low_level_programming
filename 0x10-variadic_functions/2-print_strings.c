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
	char *text;

	va_start(ap, n);

	for (i = n; i > 0; i--)
	{
		text = va_arg(ap, char *);
		if (text)
		{
			printf("%s", text);
		}
		else if (text == NULL || *text == '\0')
		{
			printf("nil");
		}

		if (separator != NULL)
		{
			if (i - 1 != 0)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
