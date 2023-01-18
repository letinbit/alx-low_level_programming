#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - function that add 2 operands.
 * @a: first operand
 * @b: second operator
 *
 * Return: Addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that calculate difference of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply two numbers.
 * @a: first operand
 * @b: second operand
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that perform division of a by b
 * @a: devidened
 * @b: devisionr
 *
 * Return: the division of both numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that find the remender if a devided by b
 * @a: first operand
 * @b: second operand
 *
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
