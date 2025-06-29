#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return count;
}
