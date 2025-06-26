#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
