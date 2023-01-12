#include <stdlib.h>

/**
 * copymemory - Copy n bytes from soource to destination
 * @dest: Destination memory area
 * @src: source memory area
 * @n: size of bytes to be coppied
 *
 * Return: Pointer to area
 */
char *copymemory(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - Reallocate a memory block using malloc
 * @ptr: Old memory block
 * @old_size: Size of of old memory block
 * @new_size: Size the new memory block should be
 *
 * Return: Pointer to new memory space, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int min;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min = new_size;
	else
		min = old_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	nptr = copymemory(nptr, ptr, min);
	free(ptr);
	return (nptr);
}
