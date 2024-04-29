#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - The Entry Point
 *
 * a function that initialize a variable
 *
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: Fourth member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
