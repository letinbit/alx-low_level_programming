/*Author is Neway Solomon*/
/*#include <stdio.h>*/
#include "main.h"
#include <stdio.h>

/**
 * _strstr - functionthat that locate a substring
 * @haystack: string from which *needle will be searched
 * @needle: the sond string that will be searched
 * Return: Pointer of the matched string (s +i)
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *nee;

	while (*haystack != '\0')
	{
		hay = haystack;
		nee = needle;

		while (*haystack != '\0' && *nee != '\0' && *haystack == *nee)
		{
			haystack++;
			nee++;
		}
		if (*nee == '\0')
			return (hay);
		haystack = hay + 1;
	}
	return (0);
}
