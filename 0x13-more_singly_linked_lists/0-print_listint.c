#include "lists.h"

/**
 * print_listint - function that prints all elemtns of a list.
 *
 * @h: node
 * Return: returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		_putchar(h->n);
		h = h->next;
		count++;
	}
	return (count);
}
