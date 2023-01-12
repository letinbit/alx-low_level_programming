#include <stdlib.h>
/**
  * string_nconcat - function that concatenates two strings
  * @s1: pointer of the first string
  * @s2: pointer of the second string
  * @n: number of bytes from the second string
  * Return: pointer to the concatnated string memory (Success) NULL (if fails)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count_s1 = 0, to_conc = 0, count_s2 = 0, length = 0;
	char *new_str;

	if (s1 == NULL)/*if the first string is null*/
		s1 = "";
	if (s2 == NULL) /*if Null was passed as the second string*/
		s2 = "";
	while (s1[count_s1])
		count_s1++;
	while (s2[count_s2])
		count_s2++;
	if (n >= count_s2)
		length = count_s1 + count_s2;
	else
		length = count_s1 + n;
	new_str = malloc(sizeof(char) * (length + 1));
	if (new_str == NULL)
		return (NULL);
	count_s2 = 0;
	while (to_conc < length)
	{
		if (to_conc <= count_s1)
			new_str[to_conc] = s1[to_conc];
		if (to_conc >= count_s1)
		{
			new_str[to_conc] = s2[count_s2];
			count_s2++;
		}
		to_conc++;
	}
	new_str[to_conc] = '\0';
	return (new_str);
}
