#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer to the first node in the linked list
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	num = start->n;
	free(start);
	return (num);
}

