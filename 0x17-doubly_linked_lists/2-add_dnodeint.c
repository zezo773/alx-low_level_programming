#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value to insert
 *
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
