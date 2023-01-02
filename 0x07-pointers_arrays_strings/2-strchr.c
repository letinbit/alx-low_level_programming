/* Author is Neway Solomon */

/*#include <stdio.h>*/

/**
 * _strchr - Function that return pointer of the first ocurance of a character
 * @s: string in which the character will be searched
 * @c: character tha will be search from string s
 * Return: the first address of char c, or NULL is c is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		/*printf("The s[%i] value is %c\n", i, s[i]);*/
		if (s[i] == c)
		{
			/*printf("Now we get %c at s[%d]\n", c, s[i]);*/
			/*printf("Thus %p is the return value\n", s);*/
			return (s + i);
		}
		/*s++;*/
	}
	return ('\0');
}
