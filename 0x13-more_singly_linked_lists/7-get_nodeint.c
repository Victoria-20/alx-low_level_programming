#include "lists.h"

/**
 * get_nodeint_at_index - returns nth of a listint_t list
 * @head: pointer to the first node(head)
 * @index: index of the node
 * Return: nth nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
