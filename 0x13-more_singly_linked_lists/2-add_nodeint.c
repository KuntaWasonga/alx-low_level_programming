#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at beginning of list
 *
 * @head: name of node
 * @n: data
 * Return: returns address of new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;

		*head = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
