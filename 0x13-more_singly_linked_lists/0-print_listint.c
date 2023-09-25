#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;  // Initialize a counter to keep track of nodes

    while (h != NULL)
    {
        printf("%d\n", h->n); // Print the value of the current node
        h = h->next; // Move to the next node
        count++; // Increment the counter
    }

    return (count); // Return the number of nodes
}
