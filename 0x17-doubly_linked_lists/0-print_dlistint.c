#include "lists.h"

/**
* print_dlistint - print all elements of a list
* @h: pointer to th first node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb;

	if (h == NULL)
		return (0);

	for (nb = 0; h != NULL; nb++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nb);
}
