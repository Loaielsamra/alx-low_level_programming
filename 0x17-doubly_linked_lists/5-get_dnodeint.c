#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: pointer to head of list
 * @index: index of desired node
 * Return: address of node on succes, or NULL if failed or node
 * doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i <= index && head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
