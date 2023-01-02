/*Author is Neway Solomon*/
/*#include <stdio.h>*/
#include "main.h"

/**
 * _strpbrk - functionthat return a pointer of the second  string
 * accept from the first string s
 * @s: first string
 * @accept: the sond string that will be searched
 * Return: Pointer of the matched string (s +i)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0;
	unsigned int i = 0;
	int controller = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(accept + j) == '\0')
				break;
			else if (*(accept + j) == *(s + i))
			{
				controller = 1;
				break;
			}
			else
				j++;
		}
		if (controller != 0)
			return (s + i);
		i++;
		j = 0;
	}
	return (0);
}
