#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function declaration
 *
 * @d: pointer
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
