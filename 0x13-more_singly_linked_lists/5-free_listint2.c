#include "lists.h"

/**
 * free_listint2 - frees listint_t list and sets head to NULL
 * @head: x2 pointer to head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
