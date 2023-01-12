#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: values of array
 * @size: Size in bytes for array elements
 *
 * Return: Pointer to new memory (Success), NULL (if it fails)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array;
	unsigned int new_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_size = nmemb * size;
	new_array = malloc(new_size);

	if (new_array == NULL)
		return (NULL);
	while (i < new_size)
	{
		new_array[i] = 0;
		i++;
	}
	return (new_array);
}
