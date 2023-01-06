/*Author is Neway*/
/*#include <stdio.h>*/
/**
 * _sqr - function that find sqr root of a number recursively
 * @a: its sqr root will be calculated
 * @b: used to calculate a's sqr root
 * Return: sqr root of a, -1 if 'a' does not have sqr root
 */
int _sqr(int a, int b)
{
	if (b <= a)
	{
		/*printf("b is %d\n", b);*/
		if (b * b == a)
		{
			return (b);
		}
		return (_sqr(a, b + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - function that finds natural square root of a number
 * @n: parameter that is natural square root will be determined
 * Return: natural square root of n , or -1 if n doesn't have natural sqr root
 */
int _sqrt_recursion(int n)
{
	int sqr;

	if (n == 0)
		return (-1);
	else if (n == 1)
		return (1);
	sqr = _sqr(n, 1);
	return (sqr);
}
