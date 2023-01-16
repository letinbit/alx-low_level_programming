#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure called dog
 * @name: character type pointer
 * @age: float type character
 * @owner: charater type owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
