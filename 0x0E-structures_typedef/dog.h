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

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *copy(char *snd, char *frt);
int lenth(char *string);

#endif
