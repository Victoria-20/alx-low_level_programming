#include "lists.h"

/**
* add_dnodeint_end - adds a node at the end of a list
* @head: pointer to th first node
* @n: data
* Return: address of new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;

	return (new);
}
