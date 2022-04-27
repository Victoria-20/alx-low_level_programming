#include "main.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer to the first node(head)
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}