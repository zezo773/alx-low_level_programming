#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);

	new->n = n;
	ptr = *head;
	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}
