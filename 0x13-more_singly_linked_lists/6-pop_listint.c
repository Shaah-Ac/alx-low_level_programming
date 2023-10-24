#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (*head == NULL)
		return (0);

	h = *head;
	*head = h->next;
	data = h->n;
	free(h);
	return (data);
}
