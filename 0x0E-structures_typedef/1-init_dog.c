#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: Storm
 * @age: 3.5
 * @owner: Deb
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
		d->name = Storm;
		d->age = 3.5;
		d->owner = Deb;
}


