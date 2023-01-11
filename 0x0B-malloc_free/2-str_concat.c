/* Author is Neway */
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: the first string to be concatenate
  * @s2: the second string to be concatenate
  *
  * Return: Pointer of new space that holds s1 followed by s2 (Success)
  * NULL (failure)
  */
char *str_concat(char *s1, char *s2)
{
	int s1_index = 0, s2_index = 0, k = 0, l = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_index])
		s1_index++;

	while (s2[s2_index])
		s2_index++;

	l = s1_index + s2_index;
	concat = malloc((sizeof(char) * l) + 1);

	if (concat == NULL)
		return (NULL);

	s2_index = 0;

	while (k < l)
	{
		if (k <= s1_index)
			concat[k] = s1[k];

		if (k >= s1_index)
		{
			concat[k] = s2[s2_index];
			s2_index++;
		}

		k++;
	}

	concat[k] = '\0';
	return (concat);
}
