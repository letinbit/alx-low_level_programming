/*Author is Neway */
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars, and initializes it
  * with a specific char
  * @size: The size of the array
  * @c: will be the array vaues
  *
  * Return: pointer to the array
  * Null if size = 0 or fails,
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pointer_to_array;

	if (size == 0)
		return (NULL);

	pointer_to_array = malloc(size * sizeof(char));

	if (pointer_to_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pointer_to_array[i] = c;
	return (pointer_to_array);
}
