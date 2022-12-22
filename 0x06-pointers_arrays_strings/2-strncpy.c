/*Author is Neway Solomon*/

/**
 * _strncpy - Function that concatnet two strings upto n
 * elements of source string
 * @dest: Destination string
 * @src: Source string
 * @n: most element of src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	int size_dest = 0;
	int size_src = 0;

	while (dest[size_dest] != '\0')
	{
	size_dest++;
	}
	size_dest = size_dest + 1;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	size_src = size_src + 1;
	if (n > size_src)
	{
		while (count < n)
		{
			if (count <= size_src)
				dest[count] = src[count];
			if (count > size_src)
				dest[count] = '\0';
			count++;
		}
	}
	else
	{
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
		dest[size_dest] = '\0';
	}
	/* Return dest */
	return (dest);
}
