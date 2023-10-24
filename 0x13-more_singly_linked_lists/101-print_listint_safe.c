#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head) {
  size_t nodes;

  // Declare and define the listint_t_size() function here, or in a separate header file.

  nodes = listint_t_size(head);

  if (nodes == 0) {
    for (; head != NULL; nodes++) {
      printf("[%p] %d\n", (void *)head, head->n);
      head = head->next;
    }
  } else {
    for (size_t index = 0; index < nodes; index++) {
      printf("[%p] %d\n", (void *)head, head->n);
      head = head->next;
    }

    printf("-> [%p] %d\n", (void *)head, head->n);
	}

  return nodes;
}
