#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	
	while (i < index && cur)
	{
		cur = cur->next;
		i++;
	}
	if (!cur)
		return (-1);
	if (cur->prev)
		cur->prev->next = cur->next;
	if (cur->next)
		cur->next->prev = cur->prev;
	if (*head == cur)
		*head = cur->next;

	free(cur);
	return (1);
}
