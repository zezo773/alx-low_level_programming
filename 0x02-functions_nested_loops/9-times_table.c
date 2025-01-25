#include "main.h"

/**
 * times_table - the entry point
 *
 * Return: void value
 */
void times_table(void)
{
	int row, num, result;

	for (row = 0; row <= 9; row++)
	{
		for (num = 0; num <= 9; num++)
		{
			result = num * row;

			if (num > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (result < 10 && num > 0)
				_putchar(' ');


			if (result >= 10)
			{
				_putchar('0' + (result/ 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar('0' + result);
			}
		}
		_putchar('\n');
	}
}
