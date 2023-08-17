#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @h: double pointer to head node
 * @idx: desired index
 * @n: data to add into new node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp;

	if (h == NULL || idx < 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new;
		else
		{
			new->next = tmp;
			tmp->prev = new;
			*h = new;
		}
		return (new);
	}
	for (i = 0; i + 1 == idx || tmp->next == NULL; i++)
	{
		if (i + 1 == idx)
		{
			if (tmp->next != NULL)
				tmp->next->prev = new;
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
