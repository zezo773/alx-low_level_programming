#include "main.h"

/**
 * prime_check - the entry point
 *
 * @n: the first parameter
 * @x: the second parameter
 *
 * Return: intger value
 */
int prime_check(int n, int x)
{
	if (x * x > n)
		return (1);
	else if (n % x == 0)
		return (0);
	return (prime_check(n, x + 1));
}

/**
 * is_prime_number - the entry point
 *
 * @n: the parameter
 *
 * Return: intger value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
