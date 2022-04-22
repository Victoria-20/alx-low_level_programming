#include "lists.h"

/**
 * print_list - prints all elements of the list_t list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t item;

	item = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		item++;
	}
	return (item);
}
