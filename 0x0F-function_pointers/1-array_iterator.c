/* NEWAY */
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a fuunction on each element of an array
 * @array: pointer to array
 * @size: is the size
 * @action: function pointer
 *
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
