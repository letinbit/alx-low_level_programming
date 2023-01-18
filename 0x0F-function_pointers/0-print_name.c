#include "function_pointers.h"

/**
 * print_name - function that prints the name 
 * - function that has function pointer as arument
 * @name: character type pointer to name
 * @f: a pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
