#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node of a list
* @head: pointer to th first node
* @index: node to return
* Return: address of node
*/

listint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int cpt = 0;

	if (head == NULL)
		return (NULL);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	ptr = head;
	while ((index != cpt) && (ptr != NULL))
	{
		cpt++;
		ptr = ptr->next;

	}

	return (ptr);

}
