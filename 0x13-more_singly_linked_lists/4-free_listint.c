#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: void value
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
