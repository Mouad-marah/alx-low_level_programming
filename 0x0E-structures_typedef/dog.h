#ifndef dog_H
#define dog_H

/**
 * struct dog - Structure buddy
 *
 * @name: pointer char
 * @age: float variable
 * @owner: pointer char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - struct
*/

typedef struct dog dog_t;

dog_t *doggy_dog(char *name, float age, char *owner);

#endif
