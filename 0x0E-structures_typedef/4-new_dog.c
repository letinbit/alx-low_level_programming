/* This code is written by Neway */

#include <stdlib.h>
#include "dog.h"

/**
  * length - calculate the string length
  * @string: String to be measured
  *
  * Return: the string size
  */
int length(char *string)
{
	int count;

	for (count = 0; *string != '\0'; string++)
	{
		count++;
	}

	return (count);
}

/**
 * copy - functionthat copy a string
  * @snd: Destination value
  * @frt: Source value
  *
  * Return: the new string
  */
char *copy(char *snd, char *frt)
{
	int i;

	for (i = 0; frt[i] != '\0'; i++)
	/*while (frt[i] != '\0')*/
	{
		snd[i] = frt[i];
		/*i++;*/
	}

	snd[i++] = '\0';

	return (snd);
}


/**
 * new_dog - dog_t type function that store a copy of name and owner
 * @name: parameter which will be coppied
 * @age: ...
 * @owner: the third parameter that will be coppied to the new struct type
 *
 * Return: new struc that is a copy of struct dog memebers name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buchila; /* Baby dog name in Amharic */
	int name_length = 0, owner_length = 0;

	if (name != NULL && owner != NULL)
	{
		name_length = length(name) + 1;
		owner_length = length(owner) + 1;
		buchila = malloc(sizeof(dog_t));

		if (buchila == NULL)
			return (NULL);

		buchila->name = malloc(sizeof(char) * name_length);

		if (buchila->name == NULL)
		{
			free(buchila);
			return (NULL);
		}

		buchila->owner = malloc(sizeof(char) * owner_length);
		if (buchila->owner == NULL)
		{
			free(buchila->name);
			free(buchila);
			return (NULL);
		}
		buchila->name = copy(buchila->name, name);
		buchila->owner = copy(buchila->owner, owner);
		buchila->age = age;
	}

	return (buchila);
}
