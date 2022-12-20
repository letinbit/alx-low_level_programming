/* author is Neway Solomon */
#include <stdio.h>

/**
 * _strlen - function that calculate the string lenght
 * @s: character passed using the pointer
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
