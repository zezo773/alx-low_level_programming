#include "lists.h"

/**
 * listint_len - that return number of nodes
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
