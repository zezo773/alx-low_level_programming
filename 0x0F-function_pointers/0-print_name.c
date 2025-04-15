#include "function_pointers.h"

/**
 * print_name - the entry point
 *
 * @name: the printed name
 * @f: the function pointer
 *
 * Return: void value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
