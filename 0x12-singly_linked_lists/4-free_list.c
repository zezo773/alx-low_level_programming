#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
