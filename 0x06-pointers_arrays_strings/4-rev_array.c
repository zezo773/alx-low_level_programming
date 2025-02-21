#include "main.h"

/**
 * reverse_array - the entry point
 *
 * @a: the array
 * @n: the number of intgers
 *
 * Return: void value
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
