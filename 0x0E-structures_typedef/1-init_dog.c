#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize dog type variable
 * @d: dog pointer
 * @name: char type pointer dog member
 * @age: float type dog member
 * @owner: char type pointer dog member
 *
 * Return: the function is void type- no return at all
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
