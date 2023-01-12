/*Author is Neway*/
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: passed parameter to determine the size
  * Return: pointer to the allocated memory (Success)
  * Nothing but process termination (if mallocfails)
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
