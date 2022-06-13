#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node of a list
* @head: pointer to th first node
* @index: node to return
* Return: address of node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	for (ptr = head; ptr != NULL && index != 0; index--)
	{
		ptr = ptr->next;
	}

	return (ptr);

}
