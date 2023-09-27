#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t,
 * linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * Make sure there is no memory leaks.
 *
 * Return:  and returns the head node’s data (n) or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;

	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
}
