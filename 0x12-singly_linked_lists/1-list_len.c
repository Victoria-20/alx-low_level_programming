#include "lists.h"

/**
 * list_len - prints all elements of the list_t list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n_elements;

	n_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		n_elements++;
	}
	return (n_elements);
}
