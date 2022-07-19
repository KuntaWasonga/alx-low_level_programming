#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: node
 * Return: returns the head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
