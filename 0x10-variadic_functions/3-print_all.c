#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: list of arg types
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list pr;
	int n = 0, i = 0;
	char *delimiter = ", ";
	char *text;

	va_start(pr, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			delimiter = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(pr, int), delimiter);
			break;
		case 'i':
			printf("%d%s", va_arg(pr, int), delimiter);
			break;
		case 'f':
			printf("%f%s", va_arg(pr, double), delimiter);
			break;
		case 's':
			text = va_arg(pr, char *);
			if (text == NULL)
				text = "(nil)";
			printf("%s%s", text, delimiter);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(pr);
}
