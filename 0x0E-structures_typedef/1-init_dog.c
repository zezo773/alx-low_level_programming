#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - The Entry Point
 *
 * a function that initialize a variable
 *
 * @d: First Parametter
 * @name: Second Parametter
 * @age: Third Parametter
 * @owner: Fourth Parametter
 *
 * Return: Nothing
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
