/* Author Neway Solomon */
#include "main.h"

/**
 * main - Entry point
 * This prgram print _putchar, include used defined header called main.h
 * thus use a function _putchar() availalbe in header main.h
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char txt[] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		if (i == 8)
		{
			_putchar('\n');
			break;
		}
		_putchar(txt[i]);
	}
	return (0);
}
