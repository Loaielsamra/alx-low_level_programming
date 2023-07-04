#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: x2 pointer to head node
 * @idx: index
 * @n: data to input into node
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	for (i = 1; i < idx && tmp; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		*head = new;
		new->next = tmp;
	}
	else if (tmp->next)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = NULL;
		tmp->next = new;
	}

	return (new);
}
