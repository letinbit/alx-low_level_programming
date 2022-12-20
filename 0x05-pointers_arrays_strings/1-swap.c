/* Author is Neway Solomon */

/**
 * swap_int - functionat that is intended to swap the two values
 * @a: th first parameter to be swapped
 * @b: the second variable o be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
