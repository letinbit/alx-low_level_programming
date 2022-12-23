/*Author is Neway Solomon */
#include <stdio.h>
/**
 * countstring - function to know the size of string
 * @s: string need to be counted
 * Return: size of s
 */
int countstring(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	printf("The size of the string is %d\n", count);
	return (count);
}

/**
 * _strcmp - Function that compare two strings
 * @s1: the first string to be compaired
 * @s2: the second string to be compaired
 * Return: ascii value difference of first element of both strings
 */
int _strcmp(char *s1, char *s2)
{
	int countstring(char *s);
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	int difference;

	count1 = countstring(s1);
	count2 = countstring(s2);
	difference = 0;
	if (count1 != count2)
	{
		difference = (s1[0] - s2[0]);
	}
	else
	{
		count = 0;
		while (count < count1)
		{
			if (s1[count] != s2[count])
			{
				difference = (s1[0] - s2[0]);
				break;
			}
			difference = 0;
			count++;
		}
	}
	return (difference);
}
