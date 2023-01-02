/*Author is Neway Solomon */

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: is a pointer for string s
 * @accept: Bytes
 * Return: numbers of bytes in the
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int found = 0;
	unsigned int innercount = 0;

	for (found = 0; *(s + found); found++)
	{
		for (innercount = 0; *(accept + innercount); innercount++)
		{
			if (*(s + found) == *(accept + innercount))
				break;
		}
		if (*(accept + innercount) == '\0')
			break;
	}
	return (found);
}
