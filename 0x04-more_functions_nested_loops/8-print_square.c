#include "main.h"

/** 
 * print_square - the entry point
 *
 * @size: test case
 *
 * Return: void value
 */
void print_square(int size)
{
	int count, i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 0; i < size; i++)
	{
		for (count = 0; count < size; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
