#include "dog.h"

/**
 * init_dog - the entry point
 *
 * @d: the first
 * @name: the second
 * @age: the third
 * @owner: the owner of the dog
 *
 * Return: void value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
