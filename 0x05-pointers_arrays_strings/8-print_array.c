/*Author is Neway*/
#include <stdio.h>

/**
 *  print_array- Function that print n elements of a string
 * @a: parameter passed to print it's n elements
 * @n: number of elements to be printed
 * Returrn: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;
	int size = 0;

	while (a[i] != '\0')
	{
		i++;
		size++;
	}
	if (n > size)
	{
		for (i = 0; i < size; i++)
		{
			if (a[i] == '\0')
			{
				break;
			}
			printf("%d", a[i]);
			if (i != size - 1)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] == '\0')
				break;
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
