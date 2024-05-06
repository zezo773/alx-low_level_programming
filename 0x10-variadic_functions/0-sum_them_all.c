#include "variadic_functions.h"

/**
* sum_them_all - a function that returns
* the sum of all its parameters.
* @n: number of parameters.
*
* Return: returns the sum of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)

		sum += va_arg(ptr, int)
			;
	va_end(ptr);
	return (sum);
}
