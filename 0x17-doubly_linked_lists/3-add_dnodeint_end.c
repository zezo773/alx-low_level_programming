#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value to insert
 *
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	
	if (!new)
		return (NULL);

	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (*head);
}
