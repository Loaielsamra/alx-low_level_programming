#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beginning
 * of list
 * @head: double pointer to head node
 * @str: string
 * Return: pointer to new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;

	*head = new;

	return (*head);
}
