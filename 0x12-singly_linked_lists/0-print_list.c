#include "lists.h"

/**
 * print_list - prints list
 * @h: head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}

	return (counter);
}
