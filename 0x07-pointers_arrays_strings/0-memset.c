/* Author is Neway Solomon */

/**
 * _memset - function that fills memory with a constant byte.
 * It is like as a standard function called memset()
 * @s: address of string pointed by s
 * @b: character constanty byte that will be fill
 * @n: The firat n bytes of string
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
