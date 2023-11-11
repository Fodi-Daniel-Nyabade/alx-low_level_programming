#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the doubly linked list
 * @n: integer value for the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL); /* Allocation failed */

	/* Set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Find the last node in the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the new node to the last node */
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
