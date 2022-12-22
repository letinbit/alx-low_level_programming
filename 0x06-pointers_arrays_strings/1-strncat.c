/*Author is Neway Solomon*/

/**
 * _strncat - Function that concatnet two strings upto n
 * elements of source string
 * @dest: Destination string
 * @src: Source string
 * @n: most element of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int size_dest = 0;
	int size_src = 0;

	/* Identify where '\0' found in dest string */
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	/*compare the value of n and the size of src*/
	while (dest[size_src] != '\0')
	{
		size_src++;
	}
	if (n > size_src)
	{
		/* copy each character from src to dest: dest '\0' should be replaced*/
		while (count < size_src)
		{
			dest[size_dest] = src[count];
			size_dest++;
			count++;
		}
	}
	else
	{
		/**
		 * copy each character from src to dest upto n most character:
		 * dest '\0' should be replaced
		 */
		while (count < n)
		{
			dest[size_dest] = src[count];
			size_dest++;
			count++;
		}
	}
	/* Return dest */
	return (dest);
}
