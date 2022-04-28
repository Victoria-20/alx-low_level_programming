#include "lists.h"

/**
 * sum_listint - return the sum of all the data of a listint_t list
 * @head: pointer to the first node(head)
 *
 * Return: return sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
