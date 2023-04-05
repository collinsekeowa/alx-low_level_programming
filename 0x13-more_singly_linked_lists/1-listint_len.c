#include "lists.h"

/**
 * listint_len - returns no of elements in a linked listint_t list.
 * @h: the head pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	h = h->next;
		num++;
	}
	return (num);
}
