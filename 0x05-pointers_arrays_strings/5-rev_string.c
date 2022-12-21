/* author is Neway Solomon */
#include "main.h"

/**
 * rev_string - function that is used to reveres string s
 * @s: a string which will be reversed
 * Return: do not return any thing
 */
void rev_string(char *s)
{
	int size = 0;
	int i = 0;
	char s_rev[1] = "";

	while (s[i] != '\0')
	{
		i++;
		size++;
	}
	s_rev[1] = s_rev[size];
	size = size - 2;
	for (i = 0; i <= size; i++)
	{
		s_rev[i] = s[size - i];
		if (s[i] == '\0')
			break;
	}
	for (i = 0; i <= size + 1; i++)
	{
		s[i] = s_rev[i];
		if (s[i] == '\0')
			break;
	}
}
