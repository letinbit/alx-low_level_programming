/*Author is Neway Solomon */

/**
 * _strcmp - Function that compare two strings
 * @s1: the first string to be compaired
 * @s2: the second string to be compaired
 * Return: ascii value difference of first element of both strings
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int difference = 0;

	while (!(s1[count] == '\0') && !(s2[count] == '\0'))
	{
		if (s1[count] != s2[count])
		{
			difference = s1[count] - s2[count];
			return (difference);
		}
		count++;
	}
	return (0);
}
