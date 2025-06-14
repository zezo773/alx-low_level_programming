#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;

	list_t *new = malloc(sizeof(list_t));
	if (!(new))
		return (NULL);

	while (str[count])
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}
