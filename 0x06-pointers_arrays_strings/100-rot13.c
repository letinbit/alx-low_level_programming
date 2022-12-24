/*Author is Neway*/

/**
 * rot13 - Funcation than encode string using rot13
 * @item: string need to be encoded
 * Return: item
 */
char *rot13(char *item)
{
	int x = 0;
	int y;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopxrstuvwxyzabcdefghijklm";

/*	for (x = 0; item[x] != '\0'; x++)*/
	while (item[x] != '\0')
	{
		for (y = 0; y < 52; y++)
		{
			if (item[x] == s1[y])
			{
				item[x] = s2[y];
				break;
			}
		}
	x++;
	}
	return (item);
}
