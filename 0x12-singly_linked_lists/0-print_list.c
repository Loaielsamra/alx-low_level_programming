#include "lists.h"

/**
 * print_list - prints list
 * @h: head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}

	return (counter);
}
