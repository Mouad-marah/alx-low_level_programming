#ifndef dog_H
#define dog_H

/**
 * struct dog - Structure buddy
 *
 * @name: pointer char
 * @age: float variable
 * @owner: pointer char
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
