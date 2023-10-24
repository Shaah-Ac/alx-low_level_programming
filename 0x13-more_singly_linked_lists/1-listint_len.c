#include "lists.h"

/**
 *listint_len - calculate number of elements.
 *@h:pointer to a list.
 *Return:Integer.
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)

	{
		count++;
		h = h->next;
	}
	return (count);

}
