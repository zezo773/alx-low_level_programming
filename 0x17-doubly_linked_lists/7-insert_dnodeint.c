#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head of the list
 * @idx: index to insert the new node at
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *cur = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (i != idx - 1 && cur)
	{
		cur = cur->next;
		i++;
	}

	if (!cur)
	{
		free(new);
		return (NULL);
	}

	new->prev = cur;
	new->next = cur->next;

	cur->next = new;
	if (new->next)
		new->next->prev = new;

	return (new);
}
