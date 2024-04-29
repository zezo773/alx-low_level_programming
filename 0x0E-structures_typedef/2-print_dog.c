#include <stdio.h>
#include "dog.h"

/**
 * print_dog - The Entry Point
 *
 * a function that prints a struct dog
 *
 * @d: The Pametter
 *
 * return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
