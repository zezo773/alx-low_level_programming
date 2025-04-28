#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to return, starting at 0
 *
 * Return: Pointer to the node at the specified index, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	temp = head;
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp && (count == index))
		return (temp);

	return (NULL);
}
