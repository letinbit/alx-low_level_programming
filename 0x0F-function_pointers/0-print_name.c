#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that has function pointer as argemn to print character
 * @name: character type pointer to name
 * @f: a pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
