#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - function that concatenates all the arguments of your program
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */
char *argstostr(int ac, char **av)
{
	int ch = 0, i, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
