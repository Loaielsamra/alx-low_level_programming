#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at desired index
 * @head: x2 pointer to head
 * @index: index of node to be deleted (starts at 0)
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	del = *head;

	for (i = 0; i < index; i++)
	{
		tmp = del;
		if (del->next)
			del = del->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = del->next;
	else if (del->next)
		tmp->next = del->next;
	else
		tmp->next = NULL;
	free(del);

	return (1);
}
