/* Author is Neway */
#include <stdio.h>

/**
 * recursive - function that calcuate modulo recurvilly
 * @a: natural numbe that will be checked if it is prime
 * @b: devider
 * Return: 0 is it is even number 1 if its is not
 */
int recursive(int a, int b)
{
	if (b <= 9)
	{
		/*printf("Now b is %d\n", b);*/
		if (a % b == 0)
			return (0);
		else
			return (recursive(a, b + 1));
	}
	return (1);
}

/**
 * is_prime_number - Function that returns 1 if the passed parameter is prime
 * otherwise retunr 0
 * @n: passed parameter that tested wether it is prime or not
 * Return: 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	float modulo;

	if (n < 2)
	{
		/*printf ("n is less than 2\n");*/
		return (0);
	}
	else if (n == 2)
	{
		/* printf ("n is equal to 2\n");*/
		return (1);
	}
	else if (n > 2)
	{
		/*printf ("n is greater than 2. Thus call recursive\n");*/
		modulo = recursive(n, 2);
	}
	if (modulo == 0)
	{
		/*printf ("Return of recursive function is 0\n");*/
		return (0);
	}
	return (1);
}
