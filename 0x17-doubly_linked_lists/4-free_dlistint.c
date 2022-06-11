#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: pointer to th first node
* Return: none
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *tmp;

	while (head->prev != NULL)
		head = head->prev;

	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
