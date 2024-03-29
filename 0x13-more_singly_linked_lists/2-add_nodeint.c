#include "lists.h"

/**
 * add_nodeint - adds node to list
 * @head: head node of list
 * @n: list's data
 * Return: address of new_element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
