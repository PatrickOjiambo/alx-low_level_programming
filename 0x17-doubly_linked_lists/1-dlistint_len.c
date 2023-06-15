#include "lists.h"
#include<stdio.h>
/**
 * dlistint_len - Prints all elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *traverse = h;
	size_t counter = 0;

	while (traverse != NULL)
	{
		traverse = traverse->next;
		counter++;
	}
	return (counter);
}
