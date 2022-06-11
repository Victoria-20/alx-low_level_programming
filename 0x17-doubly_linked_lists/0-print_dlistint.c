/**
* print_dlistint - print all elements of a list
* @h: pointer to th first node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;

	if (h == NULL)
		return (0);

	if (h->prev != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		nb++;
		h = h->next;
	}

	return (nb);
}
