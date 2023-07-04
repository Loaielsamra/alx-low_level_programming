#include "lists.h"

/**
 * get_nodeint_at_index - fetches node at specified index
 * @head: pointer to head node
 * @index: index of desired node
 * Return: desired node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tmp = head;

	for (i = 0; i < index; i++)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
	}

	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
