#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data of a linked list
 *
 * @head: node
 * Return: sum of data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
