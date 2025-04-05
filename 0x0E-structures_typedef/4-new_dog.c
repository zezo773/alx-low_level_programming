#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
void _strcpy(char *dest, char *src);
/**
 * new_dog -  a function that creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *name_c, *owner_c;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	name_c = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!name_c)
	{
		free(new);
		return (NULL);
	}

	owner_c = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!owner_c)
	{
		free(new);
		free(name_c);
		return(NULL);
	}

	_strcpy(name_c, name);
	_strcpy(owner_c, owner);

	new->name = name_c;
	new->age = age;
	new->owner = owner_c;

	return (new);
}

/**
 * _strlen - the entry point
 *
 * @s: the string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _strcpy - the entry point
 * @dest: the first
 * @src: the soucrce of string
 *
 * Return: void value
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
