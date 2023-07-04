#include "lists.h"

/**
 * pop_listint - deletes head node and return head's data
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = tmp->next;
	free(tmp);

	return (n);
}

