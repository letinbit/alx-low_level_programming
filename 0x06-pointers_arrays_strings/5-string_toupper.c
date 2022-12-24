/* Author is Neway Solomon */

/**
 * string_toupper - Function that change all lower case to UPPER case
 * @item: each item of the string except '\0'
 * Return: item
 */
char *string_toupper(char *item)
{
	int count = 0;

	do {
		if (item[count] != '\0')
		{
			if (item[count] >= 'a' && item[count] <= 'z')
			{
				item[count] = item[count] - 32;
			}
		}
		count++;
	} while (item[count] != '\0');
	return (item);
}
