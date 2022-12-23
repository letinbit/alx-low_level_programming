/* author is Neway Solomon */

/**
 *  reverse_array- function that is used to reveres string s
 * @a: a string which will be reversed
 * @n: is the number of elements of the array
 * Return: do not return any thing
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int count = 0;

	while (count < n)
	{
		tmp = a[count];
		a[count] = a[n];
		a[n] = tmp;
		count++;
		n--;
	}
}
