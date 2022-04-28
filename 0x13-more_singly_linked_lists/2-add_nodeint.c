#include "lists.h"

/**
 * add_nodeint - print all elements of a listint_t list
 * @head: pointer to the first node(head)
 * @n: number of elements
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* check if memory has been allocated */
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);


}
