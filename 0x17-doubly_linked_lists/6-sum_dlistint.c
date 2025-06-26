#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	
	temp = head;
	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);

}
