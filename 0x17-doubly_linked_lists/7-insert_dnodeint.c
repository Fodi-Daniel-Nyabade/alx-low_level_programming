#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added (starting from 0)
 * @n: integer value for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL; /* Allocation failed */

	/* Set the value of the new node */
	new_node->n = n;

	/* If inserting at the beginning (index 0) */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return new_node;
	}

	/* Traverse the list to find the position to insert the new node */
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	/* If the position to insert is beyond the end of the list, return NULL */
	if (temp == NULL)
	{
		free(new_node);
		return NULL;
	}

	/* Insert the new node at the specified position */
	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return new_node;
}
