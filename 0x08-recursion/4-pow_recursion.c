/* Author is Neway */
#include <stdio.h>
/**
 *  _pow_recursion - Recursion function that return x the power of y
 *  @x: base
 *  @y: exponent
 *
 *  Return: multiplication of x by x y times
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else if (x == 0)
		return (0);
	else if (y >= 1)
	{
		/**
		 * printf("\n X is %d", x);
		 * printf("\n Y is %d", y);
		 * printf("\n Result is %d", result);
		 */
		return (x * _pow_recursion(x, y - 1));
	}
	/*printf("\nThe Final result is %d", result);*/
	return (result);

}
