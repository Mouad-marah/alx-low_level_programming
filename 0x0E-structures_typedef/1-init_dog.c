#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer structre
 * @name: pointer char
 * @age: float variable
 * @owner: pointer char
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.owner = owner;
		d.age = age;
		d.name = name;
	}
}
