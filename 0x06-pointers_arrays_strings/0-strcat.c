/*Author is Neway Solomon*/

/**
 * _strcat - Function that concatnet two strings
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int size_dest = 0;

	/* Identify where '\0' found in dest string */
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	/* copy each character from src to dest: dest '\0' should be replaced*/
	while (src[count] != '\0')
	{
		dest[size_dest] = src[count];
		size_dest++;
		count++;
	}
	/* Return dest */
	return (dest);
}
