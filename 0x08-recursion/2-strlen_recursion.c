/* Author is Neway*/

/**
 * _strlen_recursion - recursion function that returns the string length
 * @s: string that its length will be calculated
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
