/*Author is Neway Solomon */

/**
 * _memcpy - Function that copy a memory area
 * @dest: destination string
 * @src: source string
 * @n: n bytes size of the buffer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		/* *(dest + i) = *(src + i);*/
		i++;
	}
	return (dest);
}
