#include "lists.h"

/**
 * free_listint - frees a list listint_t
 * @head: pointer to the first node(head)
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
