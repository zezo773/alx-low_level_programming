#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: sum of all n values, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!temp)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
