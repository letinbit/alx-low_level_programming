/* Author is Neway Solomon */

/**
 * size_of_string - funcation that calculate the size of string
 * @str: parameter that its size will be calculated
 * Return: size of the string
 */
int size_of_string(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * _strcpy - function that copy values from second parameter to the first one
 * @dest: first parameter on with the coppied value will be store
 * @src: second parameter which will be coppied
 * Return: rwturn the first parameter, dest
 */
char *_strcpy(char *dest, char *src)
{
	int size_of_string(char *);
	int i = 0;
	int size_of_dest;
	int size_of_src;

	size_of_dest = size_of_string(dest);
	size_of_src = size_of_string(src);

	if (size_of_dest >= size_of_src)
	{
		for (i = 0; i <= size_of_src; i++)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
				break;
		}
	}
	else
	{
		dest[size_of_dest] = dest[size_of_src];
		for (i = 0; i <= size_of_src; i++)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
				break;
		}
	}
	return (dest);
}
