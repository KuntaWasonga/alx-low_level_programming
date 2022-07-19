#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: node
 * @index: index of the node
 * Return: returns NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
