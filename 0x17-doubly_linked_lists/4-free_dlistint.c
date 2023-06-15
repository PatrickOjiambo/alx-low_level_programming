#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function frees the memory allocated for each node
 *              in the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
    	dlistint_t *current = head;
    	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

