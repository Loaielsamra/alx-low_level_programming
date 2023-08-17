#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: pointer to head
 * @n: data to add into new node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = (*head);
	*head = new;

	return (new);
}
