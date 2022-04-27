#include "lists.h"

/**
 * listint_len - print all elements of a listint_t list
 * @h: pointer to the first node(head)
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
