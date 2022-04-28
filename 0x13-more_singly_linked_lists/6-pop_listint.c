#include "lists.h"

/**
 * pop_listint - deletes tha head node of a listint_t linked list
 * @head: pointer to the first node(head)
 *
 * Return: the heads data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
