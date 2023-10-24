#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: the head pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
