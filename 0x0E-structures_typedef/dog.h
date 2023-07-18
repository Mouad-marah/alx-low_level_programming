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
 * doggy - struct
*/

typedef struct dog dog_y;
dog_y *doggy_info(char *name, float age, char *owner);

#endif
