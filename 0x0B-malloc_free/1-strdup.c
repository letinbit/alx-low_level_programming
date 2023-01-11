/* Author is Neway */
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly allocated space in
  * memory, which contains a copy of the string given as a parameter
  * @str: string will be loocated in new space
  *
  * Return: pointer to duplicate string (Success)
  * NULL (if str = NULL)
  */
char *_strdup(char *str)
{
	int j = 0;
	int i = 1;
	char *dup_str_p;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (dup_str_p == NULL)
		return (NULL);

	while (j < i)
	{
		dup_str_p[j] = str[j];
		j++;
	}

	dup_str_p[j] = '\0';
	return (s);
}
