#include "lists.h"

/**
 * free_list - free list_t list
 * @head: head node
 */

void free_list(list_t *head)
{
	list_t *tmp, *n;

	tmp = head;

	while (tmp != NULL)
	{
		n = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = n;
	}
}
