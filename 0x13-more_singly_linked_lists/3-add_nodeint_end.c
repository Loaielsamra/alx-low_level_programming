#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: head node of list
 * @n: data to add into node
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (temp)
		temp->next = new;
	else
		*head = new;

	return (new);
}
