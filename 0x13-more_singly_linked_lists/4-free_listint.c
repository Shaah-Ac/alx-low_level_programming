#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *h, *h2;

	h = head;
	while (h != NULL)
	{
		h2 = h->next;
		free(h);
		h = h2;
	}
}
