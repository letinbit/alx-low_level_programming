/* author is Neway Solomon */
#include "main.h"

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
	int last;

	last = n - 1;

	while (count < last)
	{
		tmp = a[count];
		a[count] = a[last];
		a[last] = tmp;
		count++;
		last--;
	}
}
