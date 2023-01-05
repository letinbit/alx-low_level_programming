/* Author is Neway*/

/**
 * factorial - function that cakculate the fuctorial of n
 * @n: Its factorial will be calculated
 * Return: fact. of n if n>0 or error msg
 */
int factorial(int n)
{
	/*int result = 1;*/
	/*int i = 1;*/

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else if (n > 1)
	{
		/**
		 * for (i = 1; i <= n; i++)
		 * {
		 * result = result * i;
		 * }
		 */
		return (n * factorial(n - 1));


	}
	return (n);
}
