#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv = *head;
	listint_t *cur = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}
	while (cur && (index != 0))
	{
		prv = cur;
		cur = cur->next;
		index--;
	}
	if (!cur)
		return (-1);

	prv->next = cur->next;
	free(cur);

	return (1);
}
