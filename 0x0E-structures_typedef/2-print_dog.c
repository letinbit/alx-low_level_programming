#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Function that print the values of struct dog
 * @d: dog type structure that could be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
		/**
		 * as the function is void there is nothing to be returned
		 */
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nnil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

