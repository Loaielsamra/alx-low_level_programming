#include "lists.h"

/**
 * sum_listint - calculates the sum of all data of
 * listint_t list
 * @head: pointer to head node
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
