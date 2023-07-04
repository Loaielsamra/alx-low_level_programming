#include "lists.h"

/**
 * free_listint - frees listint_t  list
 * @head: pointer to head node of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *n;

	tmp = head;

	while (tmp != NULL)
	{
		n = tmp->next;
		free(tmp);
		tmp = n;
	}
}
