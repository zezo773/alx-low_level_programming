#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index to insert the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int count = 0;

	temp = malloc(sizeof(listint_t));
	if (!(temp))
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr && (count < (idx - 1)))
	{
		ptr = ptr->next;
		count++;
	}

	if (!ptr)
	{
		free(temp);
		return (NULL);
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
