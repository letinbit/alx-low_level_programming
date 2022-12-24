/*author is Neway*/

/**
 * leet - Funcation than encode string to 1337
 * @item: string need to be encoded
 * Return: item
 */
char *leet(char *item)
{
	int x;
	int y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; item[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (item[x] == s1[y])
			{
				item[x] = s2[y];
			}
		}
	}
	return (item);
}
