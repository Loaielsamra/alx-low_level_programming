#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: double pointer to head node
 * @index: desired index
 * Return: 1 id success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	hold = *head;
	if (index == 0)
	{
		*head = hold->next;
		if (hold->next == NULL)
			(*head)->prev = NULL;
		free(hold);
		return (1);
	}
	for (i = 0; hold != NULL; i++)
	{
		if (i == index)
		{
			if (hold->next != NULL)
				hold->next->prev = hold->prev;
			if (hold->prev != NULL)
				hold->prev->next = hold->next;
			free(hold);
			return (1);
		}
		hold = hold->next;
	}
	return (-1);
}
