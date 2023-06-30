#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: double pointer to head node
 * @str: string to put in data of new node
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int i;

	if (head == NULL)
		return (NULL);
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;

	if (temp)
		temp->next = new;
	else
		*head = new;

	return (new);
}
