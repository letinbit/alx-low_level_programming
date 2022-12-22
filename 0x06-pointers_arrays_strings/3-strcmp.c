/*Author is Neway Solomon */
#include <stdio.h>

/**
 * _strcmp - Function that compare two strings
 * @s1: the first string to be compaired
 * @s2: the second string to be compaired
 * Return: ascii value difference of first element of both strings
 */
int _strcmp(char *s1, char *s2)
{
	int s1_ascii = 0;
	int s2_ascii = 0;
	int count = 0;

	while (s1[count] != '\0') /*calculating s1 ascii value*/
	{
		s1_ascii = s1_ascii + s1[count];
		count++;
		/*("the current value of s1_ascii is %d\n", s1_ascii);*/
	}
	/*printf("The ascii value of the first string s1 is %d\n", s1_ascii);*/
	count = 0;
	while (s2[count] != '\0')/* calculating s2 ascii value*/
	{
		s2_ascii = s2_ascii + s2[count];
		count++;
		/*printf("the current value of s1_ascii is %d\n", s2_ascii);*/
	}
	/*printf("The ascii value of the second string s2 is %d\n", s2_ascii);*/
	/*printf("Thier difference is %d", (s1_ascii - s2_ascii));*/
	if (s1_ascii == s2_ascii)
		return (0);
	else
		return (s1[0] - s2[0]);
}
