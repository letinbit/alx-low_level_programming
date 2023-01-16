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
	else {
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", (d->age) ? d->age : 0);
		if (d->owner == NULL)
			printf("Owner: (nnil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

