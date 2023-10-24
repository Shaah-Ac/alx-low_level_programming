#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp0, *temp1;

	temp0 = malloc(sizeof(listint_t));
	if (temp0 == NULL)
		return (NULL);

	temp0->n = n;
	temp0->next = NULL;

	if (*head == NULL)
	{
		*head = temp0;
		return (temp0);
	}

	temp1 = *head;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp0;
	return (temp0);
}
