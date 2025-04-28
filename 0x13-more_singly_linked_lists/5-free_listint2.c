#include "lists.h"

/** */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
		return;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
