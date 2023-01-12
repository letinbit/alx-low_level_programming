/*Author is Neway */
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum range of an array
 * @max: maximum range of an array
 *
 * Return: pointer to the newly created array (Success)
 * Null (if min > max or mallc fails)
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int new_min = min;
	int diff;

	diff = max - min;

	if (diff < 0)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (0);
	while (i <= diff)
		array[i++] = new_min++;
	return (array);
}
