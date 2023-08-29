#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @listint_t: a parameter passed to the function
 * @h: pointer to the head node
 * Return: number of node (success)
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
