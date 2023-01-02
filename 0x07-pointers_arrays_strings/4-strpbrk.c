/**
 * _strpbrk - functionthat return a pointer of the second  string 
 * accept from the first string s 
 * @s: first string
 * @accept: the sond string that will be searched
 * Retunr: pointer of the matched string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) !='\0')
		{
			return (s + i);
		}
	}
	return (0);
}
