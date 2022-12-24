/* Author is Neway Solomon */

/**
 * word_separator - Function that identify word separator is there
 * @item: character need to be Uppercase or left as it is
 * @separator: will be 1 if there is a separator
 * Return: 1 or 0
 */
int word_separator(char item, int separator)
{
	switch (item)
	{
		case ',':
			separator = 1;
			break;
		case ';':
			separator = 1;
			break;
		case '!':
			separator = 1;
			break;
		case '?':
			separator = 1;
			break;
		case '"':
			separator = 1;
			break;
		case '(':
			separator = 1;
			break;
		case ')':
			separator = 1;
			break;
		case '{':
			separator = 1;
			break;
		case '}':
			separator = 1;
			break;
		case ' ':
			separator = 1;
			break;
		case '\t':
			separator = 1;
			break;
		case '\n':
			separator = 1;
			break;
		default:
			break;
	}
	return (separator);
}

/**
 * cap_string - Function that change first character of words to UPPERcase
 * @item: character evaluated to be UPPERcase
 * Return: item
 */
char *cap_string(char *item)
{
	int word_separator(char item, int separator);
	int word_sep = 0;
	int count = 0;

	while (item[count])
	{
		while (!(item[count] >= 'a' && item[count] <= 'z'))
		{
			count++;
		}
		word_sep = word_separator(item[count - 1], word_sep);
		if (word_sep == 1 || count == 0)
		{
			item[count] = item[count] - 32;
			word_sep = 0;
		}
		count++;
	}
	return (item);
}
