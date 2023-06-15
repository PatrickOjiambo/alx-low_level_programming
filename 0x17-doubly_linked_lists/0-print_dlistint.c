#include "lists.h"
#include<stdio.h>
/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *traverse = h;
	size_t counter = 0;

	while (traverse != NULL)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
		counter++;
	}
	return (counter);
}

