#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function that uses function free
  * @d: struct name of dog_t
  *
  * Return: Nothing as it free_dog is a void function
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
