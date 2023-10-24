#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of the singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *i;
	unsigned int cntr = 0;

	i = h;
	while (i)
	{
		printf("%d\n", i->n);
		cntr++;
		i = i->next;
	}
	return (cntr);
}
