#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to struct.
 * @name: 1st element.
 * @age: 2nd element.
 * @owner: 3rd element.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
