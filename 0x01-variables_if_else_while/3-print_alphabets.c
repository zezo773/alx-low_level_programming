#include <stdio.h>

/**
 * main - the entry point
 *
 * that program prints the alphabet in lowercase and then in uppercase
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char letter_l = 'a';
	char letter_u = 'A';

	while (letter_l <= 'z')
	{
		putchar(letter_l);
		letter_l++;
	}
	while (letter_u <= 'Z')
	{
		putchar(letter_u);
		letter_u++;
	}
	putchar('\n');

	return (0);
}
